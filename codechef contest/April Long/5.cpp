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
    unsigned long long n;
    cin>>n;
    if(n%4==0)
    {
        cout<<n+3<<"\n";
    }
    else if((n-1)%4==0)
    {
        cout<<n<<"\n";
    }
    else
    {
        cout<<"3\n";
    }
  }
  return 0;
}