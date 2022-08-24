#include<bits/stdc++.h>
using namespace std;
                   
class Complex{
    int real;
    int img;
    public:
    void create(int a,int b)
    {
        real=a;
        img=b;
    }
    void display()
    {
        if(img>0)
        {
            cout<<real<<"+"<<img<<"i";
        }
        else if(img==0)
        {
            cout<<real;
        }
        else
        {
            cout<<real<<img<<"i";
        }
        cout<<"\n";
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.create(1,2);
    c2.create(1,0);
    c3.create(1,-2);
    c1.display();
    c2.display();
    c3.display();

  return 0;
}