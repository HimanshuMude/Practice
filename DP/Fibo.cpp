#include<bits/stdc++.h>
#define himanshu main
using namespace std;


//  int f(int n,vector<int> &dp)
//  {
//      if(n<=1)
//      {
//          return n;
//      }
//      if(dp[n]!=-1)  return dp[n];
//      dp[n]=f(n-1,dp)+f(n-2,dp);
//      return dp[n];
     
//  } 


int himanshu()
{
  int n;
   cin>>n;
  int prev2=0;
  int prev=1;
  for (int i = 2; i <= n; i++)
  {
      int cur=prev+prev2;
      prev2=prev;
      prev=cur;
  }
  cout<<prev;
  
  return 0;
}