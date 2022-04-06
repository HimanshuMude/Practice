#include<iostream>
#include<cmath>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      ll k,a,b,c;
    cin>>k>>a>>b;
     c=a+b;
    ll sum=a+b+c%10;
    if(k==2)
    {
        if((a+b)%3==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        ll grp=(k-3)/4;
        sum=sum+(grp*20);
        ll rem=(k-3)%4;
        if(rem==1)
        {
            sum=sum+8;
        }
        else if(rem==2)
        {
            sum=sum+14;
        }
        else if(k==3){
            sum=sum+16;
        }

        if(sum%3==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
  }
  return 0;
}