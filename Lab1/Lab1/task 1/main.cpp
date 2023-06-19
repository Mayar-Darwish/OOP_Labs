#include <iostream>

using namespace std;
/*
    struct employee
    {
        int ID = 1;
        int SALARY;
        char NAME[20];

    };

  int main()
{

    employee e;
    e.SALARY=10;
    e.NAME[20] ='mayar';

    cout <<"result" << e.SALARY<<endl<<e.ID <<endl<<e.NAME;
    */

        struct employee
    {
        int id;
        int salary;
        char name[20];

    };



int main()
{
 employee e;


    cin >>e.id;
    cin >>e.salary;
    cin >>e.name;

    cout << "result:\n" <<e.id <<endl<<e.salary <<endl <<e.name;

    return 0;
}
