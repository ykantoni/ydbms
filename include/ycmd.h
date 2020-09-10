#pragma once
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#include "ytransaction.h"

class YCmd
{
public:
    YCmd()
    {
        
    }

    void set( std::string* cmd )
    {
        this->cmd = cmd;
    }

    int type() const
    {
        return 1;
    }

    int parse()
    {
        return 0;
    }

    int execute( YTransaction **tx )
    {
        return 0;
    }

private:
    std::string* cmd;
};

