#pragma once
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#ifdef WIN32
#include <windows.h>
#endif

#include "YTranLog.h"

class YTransaction
{
public:

    YTransaction()
    {

#ifdef WIN32
        my_lsn = InterlockedIncrement64( ( LONG64* )&lsn );
#elif nix__
        my_lsn = __sync_fetch_and_add( &lsn, 1 );
        my_lsn++;
#endif
    }

    int begin( const char* n )
    {
        int e;
        return e;
    }

    int rollback( const char* s )
    {
        int e;
        tx_log->rollback();
        return e;
    }

    int save( const char* s )
    {
        int e;
        return e;
    }

    int commit()
    {
        int e;
        return e;
    }

    long long int tx_lsn() const
    {
        return my_lsn;
    }

    long long int global_lsn() const
    {
        return lsn;
    }

private:
    static long long int lsn;
    long long int my_lsn;
    YTranLog* tx_log;
};

