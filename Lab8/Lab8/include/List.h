#ifndef LIST_H
#define LIST_H
using namespace std;


template <class T>
class List
{
private:
    T* arr;
    int size;
    int length;   // number of items
    int currentIndex;

public:

    List()
    {
        arr=new T(size);
        size=5;
        length=-1;

    }
    void Add(T items)
    {

        if(length == size-1)
            Extend();


        length++;

        arr[length]=items;

    }

    T getLast()
    {
        /* if(length=-1)
         {

                 //throw 0; //"Can not add employee";
                 Exception ex;

                 strcpy(ex.msg, "array is empty");
                 ex.ErrorCode = 1;

                 throw ex;

         }*/
        if(length==-1)
            throw"the list is empty";
        return arr[length];
    }


    T getbyIndex(int index)
    {
        if(index > size-1)
            throw"the index out of length";
        return arr[index];

    }


    void Display()
    {
        for(int i=0 ; i<size-1 ; i++)
        {
            cout<< arr[i]<<endl;

        }
    }


    T Remove(int index)
    {
        if(index > size-1)
            throw"the index out of length";

        for(int i=index; i<size-1 ; i++)
        {

            arr[i]=arr[i+1];
        }



    };

    void Extend()
    {
        T *temp = new T[size*2];
        for(int i=0; i<size-1; i++)
        {

            temp[i]=arr[i];
        }

        delete arr;      ///ليه حذف قبل ما يساوى
        arr = temp;
        size *= 2;

    }

protected:

private:
};

#endif // LIST_H
