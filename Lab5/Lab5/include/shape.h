#ifndef SHAPE_H
#define SHAPE_H


class shape
{
    public:

        shape()
        {

        }
        shape(int d1,int d2)
        {
            Dim1=d1;
            Dim2=d2;

        }


        int GetArea()
        {
           int result= Dim1 * Dim2;
            return result;
        }


    protected:
        int Dim1;
        int Dim2 ;


};

#endif // SHAPE_H
