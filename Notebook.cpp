#include <iostream>
#include "Notebook.hpp"
#include <map>
// using namespace ariel;

namespace ariel
{
    void Notebook::write(uint page ,uint row, uint col, ariel::Direction direction, string const &notebook_write)
    {
        if(row<0 || col<0 || page<0)
        {
            throw invalid_argument(" your input should be greater than 0 "); 
        }

    }

    string Notebook::read(uint page ,uint row, uint col, ariel::Direction direction, uint length)
    {
        if(row<0 || col<0 || length <0 || page<0)
        {
            throw invalid_argument(" your input should be greater than 0 "); 
        }
        string word ;

        return word;
    }

    void erase(uint page ,uint row, uint col, ariel::Direction direction, uint length)
    {
        if(row<0 || col<0 || length <0 || page<0)
        {
            throw invalid_argument(" your input should be greater than 0 "); 
        }
    }

    


    void Notebook::show(uint page )
    {
        
    }
 
    Notebook :: Notebook( ){
        // uint max_row=0;
        // uint max_col=0;
      
    };
    Notebook :: ~Notebook(){

    };

}