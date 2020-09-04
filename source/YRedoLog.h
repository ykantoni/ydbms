#pragma once
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

class YRedoLog
{
public:
    YRedoLog( const char* tname )
    {
        this->tname = tname;
        f = 0;
    }

    int open()
    {
        int e;
        lsn = 0;
        return e;
    }

    int write( long long int lsn, unsigned char *buf, size_t l )
    {
        int e = ( int )fwrite( ( char* )buf, l, 1, f );
        return e;
    }

    int read( int r )
    {
        int e;
        return e;
    }

    int read_all()
    {
        int e;
        return e;
    }

private:
    FILE* f;
    const char* tname;
    static long long int lsn;
};

