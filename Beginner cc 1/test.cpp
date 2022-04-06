#include <iostream>
#include <cmath>
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
        int t[n], d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            cin >> d[i];
        }
        if (k <= t[0])
        {
            int nt = t[0] - k;
            int bill = nt * d[0];
            for (int i = 1; i < n; i++)
            {
                bill += t[i] * d[i];
            }
            cout << bill << "\n";
        }
        else{
            int i=0;
            while(k>0)
            {
                if(k>=t[i])
                {
                    k=k-t[i];
                    t[i]=0;
                }
                else 
                {
                    t[i]=t[i]-k;
                    break;
                }
                i++;
            }
            int bill=0;
            for(i=0;i<n;i++)
            {
                bill+=t[i]*d[i];
            }
            cout<<bill<<"\n";
        }
    }
    return 0;
}


// #include <iostream>
// #include <cmath>
// #define himanshu main
// #define ll long long int

// using namespace std;
// int himanshu()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t=1;
//     // cin >> t;
//     while (t--)
//     {
//         int n=2, k=2;
//         // cin >> n >> k;
//         int t[n]={1,2}, d[n]={2,3};
//         // for (int i = 0; i < n; i++)
//         // {
//         //     cin >> t[i];
//         //     cin >> d[i];
//         // }
//         if (k <= t[0])
//         {
//             int nt = t[0] - k;
//             int bill = nt * d[0];
//             for (int i = 1; i < n; i++)
//             {
//                 bill += t[i] * d[i];
//             }
//             cout << bill << "\n";
//         }
//         else{
//             int i=0;
//             int rem=k;
//             while(rem>t[i])
//             {   
//                 t[i]=0;
//                 rem-=t[i];
//             }
//             cout<<rem<<endl;
//             int bill=0;
//             for(i=0;i<n;i++)
//             {
//                 bill+=t[i]*d[i];
//             }
//             cout<<bill<<"\n";
//         }
//     }
//     return 0;
// }