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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int p=0;
    int l=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1'&&s[i+1]=='1')
        {
            p++;
            i++;
        }
        else if(s[i]=='1'&&s[i+1]!='1')
        {
            l++;
        }
    }

    if(p==0&&l==0)
    {
        cout<<"0\n";
    }
    else if(p!=0&&l==0)
    {
        cout<<"2\n";
    }
    else if(p==0&&l!=0)
    {
        cout<<"1\n";
    }
    else
    {
        int count=1;
        p-=p/2;
        l=0;
        if(p==0 )
        {
            cout<<count<<"\n";
        }
        
        else if(p!=0)
        {
            cout<<(count+2)<<"\n";
        }

    }
  }
  return 0;
}