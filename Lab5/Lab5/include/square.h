#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

#include "shape.h"
#include "rectangle.h"

class square : public rectangle
{
    public:
        square() {}

        square(int redius1 )
        {
            Dim1 =redius1;
            Dim2= redius1;

        }


    protected:

    private:
};

#endif // SQUARE_H
