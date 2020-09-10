#pragma once

#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#include "yredolog.h"

class YTranLog
{
public:

    YTranLog( long long int lsn )
    {
        this->lsn = lsn;
    }

    int write( int lsn, unsigned char* buf, size_t l )
    {
        int e = 0;
        return e;
    }

    int rollback()
    {
        int e = rollback_to( lsn );
        return e;
    }

    int rollback_to( long long int lsn )
    {
        int e = 0;
        return e;
    }

    int flush()
    {
        int e = redo->write( lsn, tx_buf, tx_length );
        return e;
    }

private:
    static YRedoLog* redo;
    long long int lsn;
    unsigned char* tx_buf;
    size_t tx_length;
};

