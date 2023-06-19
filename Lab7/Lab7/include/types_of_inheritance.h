#ifndef TYPES_OF_INHERITANCE_H
#define TYPES_OF_INHERITANCE_H


class parent
{
    public:
        types_of_inheritance()
        {x=2;
         y=4;
         z=5;
        }
       int x;
    protected:
      int y;
    private:
        int z;
};

class child : protected parent
{                                    // child can use y of parent but cant display it to public area
public:
    int a;
    child(){y=9;b=99;}
protected:
    int b;
private:
    int c;
};

 class derived : public child
 {
 public:
    int L;
    derived(){}
 protected:
    int M;
 private:
    int N;


 };


#endif // TYPES_OF_INHERITANCE_H
