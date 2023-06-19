#include <iostream>

using namespace std;


    struct employee
    {
        int id;
        int salary;
        char name[20];

    };



int main()
{
  int x;
  int i;
  int a;
  cin >>x;
  employee *e= new employee[x];


  for(i=0; i<x;i++)
  {

     cout <<"id : " ;
      cin>>e->id;


     cout <<"salary : " ;
     cin >>e->salary;

     cout <<"name : ";
    cin >>e->name;




  }
 for(i=0; i<x; i++)
 {
   cout <<e->id <<endl<<e->salary <<endl<<e->name;

 }



   // cout << "resulr:\n" <<e.id <<endl<<e.salary <<endl <<e.name;
    return 0;
}
