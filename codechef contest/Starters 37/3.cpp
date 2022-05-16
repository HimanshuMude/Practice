#include <bits/stdc++.h>
#define himanshu main
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}

int himanshu()
{
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
      int s;
      cin >> s;
      m[s]++;
    }
    vector <pair<int,int>>v;
    for(auto &i:m)
    {
      v.push_back(make_pair(i.first,i.second));
    }
    int s=v.size();

    sort(v.begin(), v.end(), sortbysec);
    if(v[s-1].second==v[s-2].second)
    {
      cout<<"CONFUSED\n";
    }
    else
    {
      cout<<v[s-1].first<<"\n";
    }
  }
  return 0;
}