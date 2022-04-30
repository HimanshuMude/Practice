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
    int a,b;
    cin>>a>>b;
    int n1=a*10;
    int n2=b*5;
    if(n1>n2)
    {
        cout<<"FIRST\n";
    }
    else if(n1==n2)
    {
        cout<<"ANY\n";
    }
    else
    {
        cout<<"SECOND\n";
    }
  }
  return 0;
}