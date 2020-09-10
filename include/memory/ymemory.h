#pragma once
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

class YTableInMemory
{
public:
    YTableInMemory( const char* tname )
    {
        this->tname = tname;
    }

    int open()
    {
        int err;
        return err;
    }

    int write( int r )
    {
        int err;
        return err;
    }

    int read( int r )
    {
        int err;
        return err;
    }

    int read_all()
    {
        int err;
        return err;
    }

    int read_defs( std::vector<std::string>& cdefs )
    {
        int err;
        return err;
    }

private:
    FILE *f;
    const char *tname;
};

