#include<iostream>
#include<cmath>
#include<algorithm>
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
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {   vector<int> temp;
        for (int j = 0; j < 4; j++)
        {
            int c;
            cin>>c;
            temp.push_back(c);
        }
        v.push_back(temp);
        
    }
    int cal=0;
    int idx=-1;

    for(int i=0;i<n;i++)
    {
        vector<pair<int,int>> b;
        for (int j = 0; j < 4; j++)
        {
            b.push_back(make_pair(v[i][j],j));
        }
        sort(b.begin(),b.end());

        sort(v[i].begin(),v[i].end());

        
        
        

    }
    
  }
  return 0;
}