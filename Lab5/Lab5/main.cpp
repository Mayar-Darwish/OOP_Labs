#include <iostream>
#include "line.h"
#include "point.h"
#include "rectangle.h"
#include "shape.h"
#include "circle.h"
#include "square.h"
using namespace std;

int main()
{
    /*   line Line;

       int result = Line.getLength();
       cout <<result<<endl ;
       */

    //---------------------------

    rectangle rec(2,4);
                                                     // rec.GetArea();
    cout <<"area of rectangle :"<< rec.GetArea() << endl;

    circle cir(2);
    cir.GetArea();

    //cir.shape::GetArea();




    //cout <<"area of circle : " <<  cir.GetArea() << endl ;

    square squ(2);

    cout <<"area of square :"<< squ.GetArea() << endl;

    return 0;
}
