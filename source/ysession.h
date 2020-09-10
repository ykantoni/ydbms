#pragma once
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include "yqueue.h"
#include "ytransaction.h"
#include "ycmd.h"

class YSession
{
public:
    YSession( const char* u, const char* pwd, YQueue* q )
    {
        tout = 60;
        this->q = q;
    }

    void terminate()
    {

    }

    int run()
    {
        YCmd cmd;
        std::string** txt = nullptr;
        while( q->try_pop( txt, std::chrono::seconds( tout ) ) == 0 )
        {
            cmd.set( *txt );
            cmd.parse();
            cmd.execute( &tx );
        }
        terminate();
    }

private:
    static long long int sid;
    long long int tout;
    YQueue *q;
    YTransaction* tx;
};

