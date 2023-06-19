#include <iostream>
#include "List.h"
using namespace std;


int main()
{
    try{
    List <int>list;
    list.Add(10);
    list.Add(20);
    cout <<list.getLast()<<endl;
    cout << list.getbyIndex(1) <<endl;
   //cout <<list.Remove(1)<<endl;
    list.Display();

    list.Remove(1);
    list.Display();
    }
    catch(const char*msg)
    {
      cout<<msg ;
    }
    return 0;
}
