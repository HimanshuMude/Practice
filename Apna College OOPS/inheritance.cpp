#include<iostream>
using namespace std;

class A{
    protected:

    void jadu()
    {
        cout<<"Jadoo with O\n";//Not Accessible
    }

    public :
     void print()
     {
         cout<<"Magic\n";
     }
     void funcA(){
         cout<<"From A\n";
     }
};
/*---------------Single Inheritance---------------------------*/
class B : public A{

};//single inheritance

/*---------------Multiple Inheritance---------------------------*/

class X
{
    public :
     void funcX(){
         cout<<"From X\n";
     }
};

class C : public A, public X
{
    public:
      void funcC(){
          cout<<"From C\n";
      }
};
/*-------------------------------Multi Level Inheritance---------------------*/

class P {
    public :

    void Pfunc()
    {
        cout<<"From P\n";
    }
};

class Q:public P{
    public :
    
    void Qfunc()
    {
        cout<<"From Q\n";
    }
};

class R:public Q{
    public:
    void Rfunc()
    {
        cout<<"From R\n";
    }
};
/*------------------Hybrid Inheritance------------*/
class S:public P,public C{
    public:

    void Sfunc(){
        cout<<"From S\n";
    }
};

/* Hierarchical is similar to family tree */

int main()
{
    
    
  B b;
  b.print();//Single Inheritance

    C c;
    c.funcA();
    c.funcX();// Multiple Inheritance 
    c.funcC();

    R r;
    r.Pfunc();
    r.Qfunc();//Multi Level Inheritance
    r.Rfunc();

    S s;
    s.funcA();
    s.funcX();//Hybrid Inheritance
    s.Pfunc();


    return 0;

}