#include<iostream>

using namespace std;

class student{
    string name;// private data member
    public://mention public to use data members anywhere . By default they are private but we can create function to access them too.
    int age;
    bool gender;

    void printInfo()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"Age= "<<age<<endl;//function
        cout<<"Gender= "<<gender<<endl;
        
    }
    void setName(string s)
    {
        name=s;//accessing private data members of class using function
    }

    void getInfo()
    {
        cout<<"Name\n";
        cin>>name;
        cout<<"AGE\n";// using function to  reduce steps
        cin>>age;
        cout<<"Gender\n";
        cin>>gender;
    }
    student(string s,int a,bool b)
    {
        cout<<"Mai Parameterised hu."<<endl; 
        name=s;// this is a parameterised constructor 
        age=a;
        gender=b;
    }

    student()
    {
        cout<<"Mai Default hu."<<endl;//default constructor
    }

    student (student &a)
    {
        cout<<"Mai copy constructor hu."<<endl;//copy constructor
        name=a.name;
        age=a.age;
        gender=a.gender;
    }//copy constructor

    ~student(){
        cout<<"Destructor is called\n";
    }//destructor is called after exiting the program

    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;//operator overloading
        }
        return false;
    }

};

int main()
{
    // student a;
    // cin>>a.name;//Normal method similar to structures
    // cin>>a.gender;
    // cin>>a.age;
    
    // student a[3];
    // for(int i=0;i<3;i++)
    // {
    //     a[i].getInfo();//using function
    // }
    // for(int i=0;i<3;i++)                           //Method 2 of using classes
    // {
    //     a[i].printInfo();
    // }

    student a("Himu",18,1);//parameterised 
    // a.printInfo();
    student b;//default
    student c=a;//copy
    /*----------------------------------------------------------------------------------------*/

    //operator overloading
    if(c==a)
    {
        cout<<"Same\n";//operator overloading
    }
    
    if(b==a)
    {
        cout<<"Same\n";
    }
    else
    {
        cout<<"Not Same\n";
    }


  
}