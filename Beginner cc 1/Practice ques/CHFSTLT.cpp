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
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int si=0,di=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]!='?'&&s2[i]!='?'&&s1[i]==s2[i])
        {
            continue;
        }
        else if(s1[i]=='?'&&s2[i]=='?')
        {
            si++;
        }
        else if(s1[i]=='?'&&s2[i]!='?')
        {
            di++;
        }
        else if(s1[i]!='?'&&s2[i]=='?')
        {
            di++;
        }
        else
        {
            count++;
        }
        
    }
    // cout<<si<<" "<<di<<" "<<count<<endl;
    int min=count;
    int max=count+di+si;
    cout<<min<<" "<<max<<endl;
  }
  return 0;
}