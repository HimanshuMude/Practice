#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
                      
using namespace std;
int himanshu()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  cin>>t;
  int n=0;
  while(t--)
  {
      n++;
       int a,b;
       cin>>a>>b;
       unsigned long long int count=0;
       for(int i=a;i<(a+b)/2;i++)
       {
           unsigned long long int sum=0;
           unsigned long long int temp=i;
           unsigned long long int pdt=1;
           while (temp>0)
           {
               int rem=temp%10;
               sum+=rem;
               pdt*=rem;
               temp/=10;

           }
           if(pdt%sum==0)
           {
               count++;
           }

       } 
       for(int i=(a+b)/2;i<=b;i++)
       {
           unsigned long long int sum=0;
           unsigned long long int temp=i;
           unsigned long long int pdt=1;
           while (temp>0)
           {
               int rem=temp%10;
               sum+=rem;
               pdt*=rem;
               temp/=10;

           }
           if(pdt%sum==0)
           {
               count++;
           }

       }   
       cout<<"Case #"<<n<<": "<<count<<endl;      
  }
   return 0;
}