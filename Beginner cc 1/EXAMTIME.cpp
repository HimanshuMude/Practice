#include<iostream>
#include<cmath>
#define himanshu main
#define ll long long int
#define d "DRAGON\n"
#define s "SLOTH\n"

using namespace std;

typedef struct marks{
 int m1;
 int m2;
 int  m3;                     
}marks;

int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    marks drag,sloth;
    cin>>drag.m1>>drag.m2>>drag.m3;
    cin>>sloth.m1>>sloth.m2>>sloth.m3;
    int sum1=drag.m1+drag.m2+drag.m3;
    int sum2=sloth.m1+sloth.m2+sloth.m3;
    if(sum1>sum2)
    {
        cout<<d;
    }
    else if(sum1==sum2)
    {
        if(drag.m1>sloth.m1)
        {
            cout<<d;
        }
        else if(drag.m1==sloth.m1)
        {
            if(drag.m2>sloth.m2)
            {
                cout<<d;
            }
            else if(drag.m2==sloth.m2)
            {
                if(drag.m3>sloth.m3)
                {
                    cout<<d;
                }
                else if(drag.m3==sloth.m3)
                {
                    cout<<"TIE\n";
                }
                else{
                    cout<<s;
                }
            }
            else{
                cout<<s;
            }
        }
        else{
            cout<<s;
        }
    }
    else{
        cout<<s;
    }
  }
  return 0;
}