#include<iostream>
#include<cmath>
#include<string>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int l;
  cin>>l;
  string s;
  cin>>s;
  int n=0,t=0;
  for (int i = 0; i < l; i++)
  {
      if(s[i]=='N')
      {
          n++;
      }
      else
      {
          t++;
      }
  }

  if(t>n)
  {
      cout<<"Tusla\n";
  }
  else
  {
      cout<<"Nutan\n";
  }
  
  
  return 0;
}