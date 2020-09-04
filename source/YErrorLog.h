#pragma once

#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

class YErrorLog
{
public:
    enum class LOGLEVEL
    {
        ERROR,
        WARN,
        INFO,
        DEBUG,
        DEBUG1,
        DEBUG2,
        DEBUG3
    };

    YErrorLog( const char* n )
    {
        lname = n;
        errno_t e = fopen_s( &f, n, "w+" );
    }

    static YErrorLog* instance()
    {
        return new YErrorLog( "" );
    }

    int rotate()
    {

    }

    void log_error( std::string&& s )
    {
        log( LOGLEVEL::ERROR, s );
    }

    void log_warning( std::string&& s )
    {
        log( LOGLEVEL::WARN, s );
    }

    void log_info( std::string&& s )
    {
        log( LOGLEVEL::INFO, s );
    }

    void log_debug( std::string&& s )
    {
        log( LOGLEVEL::DEBUG, s );
    }

    void log_debug1( std::string&& s )
    {
        log( LOGLEVEL::DEBUG1, s );
    }

    void log_debug2( std::string&& s )
    {
        log( LOGLEVEL::DEBUG2, s );
    }

    void log_debug3( std::string& s )
    {
        log( LOGLEVEL::DEBUG3, s );
    }

    int log_debug3( std::string&& s )
    {
        log( LOGLEVEL::DEBUG3, s );
    }

    bool debug3() const
    {
        return false;
    }

private:

    void log( LOGLEVEL level, std::string& s )
    {
        int e = ( int )fwrite( s.c_str(), s.size(), 1, f );
    }

    FILE* f;
    const char* lname;

public:
    int mtest()
    {

    }
};

#define LOG_DEBUG3(v) if( elog->debug3() ) elog->log_debug3( v );
#define LOG_ERROR(v) if( elog->error() ) elog->log_error( v );

