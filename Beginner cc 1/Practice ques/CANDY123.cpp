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
      int n1=1;
      int n2=2;
     int chk=0;
      int chk2=0;
      
      while(1)
      {
          if(a-n1<0)
          {
              cout<<"Bob\n";
              break;
          }
          a-=n1;
          n1+=2;

          if(b-n2<0)
          {
              cout<<"Limak\n";
              break;
          }
          b-=n2;
          n2+=2;
          
      }

     

    
  }
  return 0;
}