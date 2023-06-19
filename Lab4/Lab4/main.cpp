#include <iostream>

using namespace std;

class list
{
    int * items;
    int size;

    int currentIndex;

public :

    static int counter;


    list(int size)
    {
        this->size=size;
        items=new int [size];

        counter ++;
        currentIndex=-1;
    }
    list ()
    {
        size=4;
        items= new int [size];
        counter ++;
        currentIndex=-1;



    }


    void Add(int data)
    {

        if(currentIndex==size-1)
        {
            extented();

        }
        else
        {
            items[currentIndex];

        }



    }

    ~list()
    {

        delete items;
        counter --;
    }




private:
    void extented()
    {

        int *temp=new int [size*2];
        for(int index=0; index<size ; index++)
        {

            temp[index]=items[index];
        }
        delete items;
        items=temp;
        size *=2;
    }
};


int list::counter = 0;

//------------------------------------------

void Test()
{
    list L1;

    cout << "Counter of test = " << list::counter << endl;
}

void MyFunc(list L)
{
    cout << "Counter inside function = " << list::counter << endl;
}


list Foo(list L)
{
    list L6;

    return L6;
}


int main()
{
    list myList(10),mylist2(2);

    myList.Add(2);
    myList.Add(3);
    mylist2.Add(2);
    cout << "Counter = " << list::counter << endl;        //counter of objects

    Test();

    MyFunc(myList);

    cout << "Counter of after delete = " << list::counter << endl;


    //---------------------------------------------------------

    list L1(myList);
    cout << "Counter mylist = " << list::counter << endl;

//------------------------------------------------------------

    list L2 = L1;
    cout << "Counter l2 = " << list::counter << endl;


//----------------------------------------------------

    list L3;
    L3 = L2;
    cout << "Counter l3 = " << list::counter << endl;

    //---------------------------------------------------

    list L5 = Foo(L3);  //3cpy ctor
cout << "Counter l5= " << list::counter << endl;

//----------------------------------------------------

   list L7;  //default
    L7 = Foo(L3);  //2 cpy ctor

    cout << "Counter l7= " << list::counter << endl;

    return 0;
}
