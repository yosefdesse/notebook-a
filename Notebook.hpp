
#pragma once
#include <iostream>
#include "Direction.hpp"
#include <map> 
#include <string>

using namespace std;
typedef unsigned int uint;

namespace ariel
{
    class Notebook
    {
    public:
        map<uint ,map<uint,char>> notebook;
        uint max_row=0;
        uint max_col=0;
        uint min_row=0;
        uint min_col=0;
       
   
        // string s;
        Notebook();
        ~Notebook();
        void write(uint page ,uint row, uint col, ariel::Direction direction, string const &notebook_write);
        string read(uint page ,uint row, uint col, ariel::Direction direction, uint length);
        void erase(uint page ,uint row, uint col, ariel::Direction direction, uint length);
        void show(uint page );
        void init_Inotebook(uint row , uint col);
    };

}