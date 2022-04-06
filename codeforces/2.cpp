#include <iostream>
#include<algorithm>
#include <cmath>
#define himanshu main
#define ll long long int

bool comp(ll arr[],ll n,ll idx)
{
    if(idx==n-1)
    {
        return true;
    }
    sort(arr,arr+n);
}

using namespace std;
int himanshu()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
       if( comp(a,n,0))
       {

       }
    }
    return 0;
}