#include <iostream>
#include"types_of_inheritance.h"

using namespace std;
/*
class child1
{
public:
    int x;
    child1()
    {
        x=5;
    }

};
class child2
{
public:
    int y;
    child2()
    {

        y=4;
    }
};
class Derived :public child1, child2
{
public:
    /* Derived() : child2(),child1()    //call ch1 firstly then ch2 as arranged duting declaration of class derived.....
     {

     }*/
/*
    Derived() : child1(),child2()
    {

    }

};*/

int main()
{
    /*child1 ch1;
    child2 ch2;
    Derived dri;  */


    parent p;
    child ch;
    derived d;
    cout<< p.x;
    cout <<d.x;  //we can accesss protected member can't we !!!
    cout << ch.x;
    cout <<ch.y;  // we can accesss protected member can't we !!!
    cout <<ch.z;
   // p.y;
    //p.z;



    return 0;

}
