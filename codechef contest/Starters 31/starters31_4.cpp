#include<iostream>
#include<cmath>
#include<string>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t=1;
//   cin>>t;
  while(t--)
  {
    int n=5;
    // cin>>n;
    string s={"10011"};
    // cin>>s;
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
        }
        else if(s[i]=='0')
        {
            cnt0++;
        }
    }
    int len;
    if(cnt0>cnt1)
    {
        len=2*cnt1+1;
    }
    else if(cnt0==cnt1)
    {
        len=2*cnt1;
    }
    else{
        len=2*cnt0+1;
    }

    cout<<len<<"\n";
    
  }
  return 0;
}




// #include<iostream>
// #include<cmath>
// #include<string>
// #define himanshu main
// #define ll long long int
                      
// using namespace std;


// void swap(char *r, char *s)
// {
//     char *pSwap = r;
//     r = s;
//     s = pSwap;
//     return;
// }

// int himanshu()
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);cout.tie(NULL);
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//     int n;
//     string s;
//     cin>>n>>s;
//     for (int i = 0; i < n-2; i++)
//     {
//       if(s[i]=='0')
//       {
//         if(s[i+1]=='1')
//         {
//           i++;
//           continue;
//         }
//         else 
//         {
//           int j=i+3;
//           while(j<n)
//           {
//             if(s[j]=='1')
//             {
//               swap(s[i],s[j]);
//               i++;
//               break;
//             }
//             j+=2;
//           }
//         }
//       }
//       else
//       {
//         int j=i+2;
//         while(j<n)
//         {
//           if(s[j]=='0')
//           {
//             swap(s[i],s[j]);
//           }
//         }
//       }
      
//     }

//     int count=0;

//     for(int i=0;i<n;i++)
//     {
//       if(s[i]=='0'&&s[i+1]=='1')
//       {
//         count++;
//       }
//     }
    
//     cout<<count<<"\n";

//   }
//   return 0;
// }