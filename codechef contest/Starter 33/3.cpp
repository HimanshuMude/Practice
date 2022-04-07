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
    int n;
    cin>>n;
    if(n<=4)
    {
        cout<<"1\n";
    }
    else
    {
        if(n%4==0)
        {
            cout<<n/4<<"\n";
        }
        else
        {
            cout<<(n/4+1)<<"\n";
        }
    }
  }
  return 0;
}