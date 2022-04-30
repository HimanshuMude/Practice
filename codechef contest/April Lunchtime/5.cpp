#include<iostream>
#include<cmath>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    int x,y;
    cin>>x>>y;
    if(x==1|| y==1||(x%2==1&&y%2==1))
    {
        cout<<"-1\n";
    }
    else if(x%2==0 &&y%2!=0)
    {
        for(int i=0;i<x/2;i++)
        {
            cout<<"a";
        }
        for(int i=0;i<y;i++)
        {
            cout<<"b";
        }
        for(int i=0;i<x/2;i++)
        {
            cout<<"a";
        }
        cout<<"\n";
        cout<<"b";
        for(int i=1;i<=x/2;i++)
        {
            cout<<"a";
        }
        for(int i=2;i<y;i++)
        {
            cout<<"b";
        }
        for(int i=1;i<=x/2;i++)
        {
            cout<<"a";
        }
        cout<<"b\n";

        
    }
    else if(x%2!=0&&y%2==0)
    {
        for(int i=0;i<y/2;i++)
        {
            cout<<"b";
        }
        for(int i=0;i<x;i++)
        {
            cout<<"a";
        }
        for(int i=0;i<y/2;i++)
        {
            cout<<"b";
        }
        cout<<"\n";
        cout<<"a";
        for(int i=1;i<=y/2;i++)
        {
            cout<<"b";
        }
        for(int i=2;i<x;i++)
        {
            cout<<"a";
        }
        for(int i=1;i<=y/2;i++)
        {
            cout<<"b";
        }
        
        cout<<"a\n";

    }
    else if(x%2==0&&y%2==0)
    {
        for(int i=0;i<y/2;i++)
        {
            cout<<"b";
        }
        for(int i=0;i<x;i++)
        {
            cout<<"a";
        }
        for(int i=0;i<y/2;i++)
        {
            cout<<"b";
        }
        cout<<"\n";
        cout<<"a";
        for(int i=1;i<=y/2;i++)
        {
            cout<<"b";
        }
        for(int i=2;i<x;i++)
        {
            cout<<"a";
        }
        for(int i=1;i<=y/2;i++)
        {//abbbba
            cout<<"b";
        }
        
        cout<<"a\n";

    }
    
  }
  return 0;
}