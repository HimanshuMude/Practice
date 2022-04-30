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
    ll a[n];
    ll no=0,ne=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            no++;
        }
        else
        {
            ne++;
        }
    }

    if(a[0]%2==0&&a[n-1]%2==0)
    {
        cout<<ne-1<<"\n";
    }
    else if(a[0]%2==1&&a[n-1]%2==0)
    {
        cout<<(no+ne)/2<<"\n";
    }
    else if(a[0]%2==0&&a[n-1]%2==1)
    {
        cout<<(no+ne)/2<<"\n";
    }
    else 
    {
        cout<<no-1<<"\n";
    }

    
  }
  return 0;
}