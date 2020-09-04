#pragma once
#include <string>
#include <vector>

#include "YTableOnDisk.h"
#include "YErrorLog.h"
#include "catch.hpp"

//class YTableOnDisk;

class YTable
{
public:
    int create( const char *tname, std::vector< std::string > cdefs )
    {
        return 0;
    }

    int open( const char* tname )
    {
        tod = new YTableOnDisk( tname );
        int e = tod->open();
        LOG_DEBUG3( std::string( "Opened table" ) + tname );
        return e;
    }

    int rinsert( std::vector< std::string > columns )
    {
        int e;
        return e;
    }

    int rdelete( std::vector< std::string > columns )
    {
        int err;
        return err;
    }
    int rupdate( std::vector< std::string > cdefs )
    {
        int err;
        return err;
    }

    int rselect( std::vector< std::string > cdefs )
    {
        int err;
        return err;
    }

private:

    YTableOnDisk *tod;
    static YErrorLog* elog;
};



