// #include<iostream>
// #include<stack>
// #define himanshu main
// using namespace std;

// class queue{
//     stack<int>st1;
//     stack<int>st2;
//     public:
//     void push(int x)
//     {
//         st1.push(x);
//     }
//     int pop()
//     {
//         if(st1.empty()&&st2.empty())
//         {
//             cout<<"Queue is empty\n";
//             return -1;
//         }
//         if(st2.empty())
//         {
//             while(!st1.empty())
//             {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }
//         int topval=st2.top();
//         st2.pop();
//         return topval;
//     }
//     bool empty()
//     {
//         if(st1.empty()&&st2.empty())
//         {
//             return true;   
//         }
//         return false;   
//     }


// };                  
// int himanshu()
// {
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.pop()<<endl;
//     cout<<q.empty()<<endl;
//   return 0;
// }

#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
					  
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<j*(2*i-1)<<" ";
		}
		cout<<"\n";
	}
}
int himanshu()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
	solve();
  }
  return 0;
}