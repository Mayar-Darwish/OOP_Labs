#include <iostream>

using namespace std;

int x=10;

int main()
{
   int x=20;

   cout<<"x global is : "<<::x <<endl <<"x local is:" <<x;
    return 0;
}
