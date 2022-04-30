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
    //1 huge 2 small 3 normal 4 huge 5 small 6 normal 7 huge 8 small 9 normal 10 huge
    int x;
    cin>>x;
    if((x-1)%3==0) cout<<"Huge\n";
    else if((x-2)%3==0)  cout<<"Small\n";
    else if ((x-3)%3==0)  cout<<"Normal\n";
  }
  return 0;
}