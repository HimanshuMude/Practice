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
  ll t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int n=s.size();
    if(n%2==0)
    {
        for (int i = 0; i < n; i++)
        {
            if(s[i]==s[i+1])
            {
                i++;
                continue;
            }
            else
            {
                
            }
        }
        
    }
  }
  return 0;
}