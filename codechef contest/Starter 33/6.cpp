#include<iostream>
#include<cmath>
#include<vector>
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
    int arr[n];
    int co=0,ce=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]%2==0) ce++;
      else co++;
    }
    if(co%2==1)
    {
      cout<<ce<<"\n";

    }
    else
    {
      cout<<min(co/2,ce)<<"\n";
    }
  }
  return 0;
}

// #include<iostream>
// #include<cmath>
// #include<string>
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
//     int a[n];
//     int ce=0,co=0;
//     for(int i=0;i<n;i++)
//     {
//       cin>>a[i];
//       if(a[i]%2==0)
//       {
//         ce++;
//       }
//       else
//       {
//         co++;
//       }
//     }

    
//     if(ce==co)
//     {
//       if(ce%2==0)
//       {
//         cout<<ce/2<<"\n";
//       }
//       else
//       {
//         cout<<co<<"\n";
//       }
//     }
//     else
//     {
//       int x=min(co,ce);
//       if(x==co)
//       {
//           if(x%2==0)
//           {
//             cout<<x/2<<"\n";
//           }
//           else
//           {
//             cout<<ce<<"\n";
//           }

//       }
//       else if(x==ce)
//       {
//         cout<<ce<<"\n";
//       }
//     }

    

//   }
//   return 0;
// }