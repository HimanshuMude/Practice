#include <iostream>

using namespace std;

class base
{
public:
    /*------------------------------Function Overloading-------------------------------------------------*/
    void func()
    {
        cout << "Func without argument\n";
    }

    void func(int x)
    {
        cout << "Func with argument\n";
    }

    void func(float y)
    {
        cout << "Function with float argument\n"; // can't pass float in function due to less precision have to do typecasting
    }
};

/*----------------------------------------Operator Overloading-----------------------*/

class complex
{
private:
    int real;
    int imag;

public:
    complex (int r=0, int i=0)
    {
        real = r;
        imag = i;
    }


    complex operator + (complex const &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }

    void print()
    {
        cout<<real<<"+i"<<imag;
    }
};

/*------------------------------Virtual function-----------------------*/

class bhai{
    public:
    virtual void print()
    {
        cout<<"Bhai ka function\n";
    }
    virtual void display()
    {
        cout<<"Ye bhi bhai ka function\n";
    }
};

class behen:public bhai{
    public :
    void print()
    {
        cout<<"Behen ka function\n";
    }
    void display()
    {
        cout<<"Ye bhi behen ka function\n";
    }
};

int main()
{
    // base a;
    // a.func();
    // a.func(3); // function overloading
    // a.func(3.14f);

    // complex b(5,3);
    // complex d (2,4);
    // complex c=b+d;//operator overloading 
    // c.print();

    bhai *bptr;
    behen bh;
    bptr=&bh;

    bptr->print();// Virtual function 
    bptr->display();



    return 0;
}