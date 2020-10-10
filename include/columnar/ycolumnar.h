#pragma once
#include <string>
#include <vector>

class YTableColumnar
{
public:
    int create( const char *tname, std::vector< std::string > cdefs )
    {
        return 0;
    }

    int open( const char* tname )
    {
        int e = 0;
        //int e = tod->open();
        //LOG_DEBUG3( std::string( "Opened table" ) + tname );
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

};



