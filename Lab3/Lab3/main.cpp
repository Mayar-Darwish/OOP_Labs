#include <iostream>

using namespace std;

class fraction
{
public:

    int nemenator;
    int denemenator;
    int * number;

    fraction (int Nem)
    {
        nemenator=Nem;
        setDenemenator(4);
        number = new int[10];
    }

    fraction (int Nem, int Dem)
    {
        nemenator =Nem;
        denemenator=Dem;
        number = new int [10];
    }
    fraction()
    {

     number=new int [10];
    }


    void setNemenator (int nem)
    {
        nemenator=nem;
    }

    void setDenemenator (int dem)
    {

        denemenator=dem;

    }

    int getDenemenator()
    {
        return this->denemenator ;

    }

    int getNemenator()
    {
        return this->nemenator ;

    }



    void Display()
    {
        cout <<getNemenator() <<"/" << getDenemenator() <<"\n";

    }

  /*  fraction Add(fraction frac )
    {

        fraction result;

        result.nemenator= denemenator * frac.nemenator +nemenator* frac.denemenator;

        result.denemenator= denemenator * frac.denemenator;


         return result;

    }
*/
  fraction operator+(fraction frac)
  {

      fraction result;

         result.nemenator= denemenator * frac.nemenator +nemenator* frac.denemenator;

        result.denemenator= denemenator * frac.denemenator;

        return result;


  }

  fraction operator-(fraction frac)
  {
      fraction result;

      result.nemenator= denemenator * frac.nemenator -nemenator* frac.denemenator;

        result.denemenator= denemenator * frac.denemenator;

        return result;


  }

  fraction operator=(fraction frac)
  {

      this->nemenator = frac.nemenator;
      this ->denemenator = frac . denemenator;

      this -> number = new int [10];

      for(int index =0;index<10 ;index++)
      {
          this ->number[index] = frac.number[index];

      }
return *this;

  }


};




int main()
{
    fraction f1,f2(1,2),f3(1);

    f1=f2 + f3;

     f1.Display();
    cout << "============================" << endl;
    f1=f2 - f3;

    cout <<"-----------------"<<"operator- " << endl;
    f1.Display();

   f1= f2;
    cout <<"--------------"<<"operator= " <<endl;
    f1.Display();

  //  f2.operator= (f3);
   // cout<<"-------" <<"
    //f2.Display().

    cout << f1.number[0]<<endl;
    cout << f2.number[0] <<endl;

    return 0;
}
