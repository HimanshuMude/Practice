#include <bits/stdc++.h>
#define himanshu main
using namespace std;

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
    for (auto &val : m)
    {
      cout << val.first << " " << val.second << endl;
    }
  }
  return 0;
}