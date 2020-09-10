#pragma once
#include <string>
#include <vector>

#ifdef USE_YMEMORY
	#include "ymemory.h"
#else
	#include "YTableOnDisk.h"
#endif
#include "yerrorlog.h"
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
#ifdef USE_YMEMORY
	tod = new YTableInMemory( tname );
#else
        tod = new YTableOnDisk( tname );
#endif
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

#ifdef USE_YMEMORY
  YTableInMemory *tod;
#else
    YTableOnDisk *tod;
#endif
    static YErrorLog* elog;
};



