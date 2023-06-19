#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;

#include "shape.h"

class rectangle : public shape
{
    public:
        rectangle()
         {

         }
        rectangle(int d1,int d2 )
        {
            Dim1=d1;
            Dim2=d2;

        }
    protected:

    private:
};

#endif // RECTANGLE_H
