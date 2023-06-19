#include <iostream>

using namespace std;

int add(int a,int b)
{

     cout <<"a: " <<a <<endl <<"b:" <<b;

}
int add(int a, int b ,int c)
{
     cout <<"a: " <<a <<endl <<"b:" <<b<<endl <<"c:" <<c;


}

int main()
{
   add(2,3);
   add(2,3,4);
    return 0;
}
