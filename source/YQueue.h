#pragma once
#include <string>
#include <queue>
#include <mutex>
#include <condition_variable>

// https://developer.gnome.org/glib/2.36/glib-Asynchronous-Queues.html#g-async-queue-new
// https://stackoverflow.com/questions/15278343/c11-thread-safe-queue

class YQueue
{
public:

    void push( std::string* sql )
    {
        {
            std::lock_guard< std::mutex > lock( m );

            q.push( std::move( sql ) );
        }

        c.notify_one();
    }

    int try_pop( std::string **sql, std::chrono::milliseconds timeout )
    {
        std::unique_lock< std::mutex > lock( m );

        if( !c.wait_for( lock, timeout, [this] { return !q.empty(); } ) )
            return 1;

        *sql = std::move( q.front() );
        q.pop();

        return 0;
    }
private:
    std::queue<std::string*> q;
    mutable std::mutex m;
    std::condition_variable c;
};

