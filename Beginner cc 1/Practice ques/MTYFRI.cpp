// #include<iostream>
// #include<cmath>
// #include<algorithm>
// #define himanshu main
// #define ll long long int

// using namespace std;
// int himanshu()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);cout.tie(NULL);
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//     int n;
//     cin>>n;
//     int swap;
//     cin>>swap;
//     int arr[n];
//     int mid=n/2;
//     int a[mid];
//     int b[mid+1];
//     int motu=0,tomu=0;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         if(i%2==0)
//         {
//             motu+=arr[i];

//         }
//         else
//         {
//             tomu+=arr[i];
//         }
//     }
//     int k=0;
//     for(int i=0;i<mid;i++)
//     {
//         a[i]=arr[k];
//         k+=2;
//     }
//     k=1;
//     for(int i=0;i<=mid;i++)
//     {
//         b[i]=arr[k];
//         k+=2;
//     }
//     sort(a,a+mid,greater<int>());
//     sort(b,b+mid+1);
//     bool ch=0;
//     for(int i=0;i<swap;i++)
//     {
//         if(a[i]>b[i])
//         {
//             motu=motu-a[i]+b[i];
//             tomu=tomu-b[i]+a[i];

//         }
//         if(tomu>motu)
//         {
//             ch=1;
//             break;
//         }
//         else
//         {
//             ch=0;
//         }
//     }
//     if(ch==1)
//     {
//         cout<<"YES\n";
//     }
//     else
//     {
//         cout<<"NO\n";
//     }

//   }
//   return 0;
// }

#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <algorithm>
#define himanshu main
#define ll long long int

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
        int n, k;
        cin >> n >> k;
        vector<long long int> a;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            a.push_back(m);
        }

        int motu = 0;
        int tomu = 0;
        vector< int> motu1;
        vector< int> tomu1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                motu1.push_back(a[i]);
                // motu += a[i];
            }
            else
            {
                tomu1.push_back(a[i]);
                // tomu += a[i];
            }
        }

        sort(motu1.rbegin(),motu1.rend());
        sort(tomu1.begin(), tomu1.end());
        if(k>n)
        {
            k=n;
        }
        for (int i = 0; i < k; i++)
        {
            if(tomu1[i]<motu1[i])
            {
                swap(motu1[i],tomu1[i]);
            }
        }
        for (int i = 0; i < motu1.size(); i++)
        {
            motu+=motu1[i];
        }
        for (int i = 0; i < tomu1.size(); i++)
        {
           tomu +=tomu1[i];
        }

        if(motu<tomu)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
} 