#include <iostream>
#include <bits/stdc++.h>
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
    ll a[4];
    for (int i = 0; i < 4; i++)
    {
      cin >> a[i];
    }
    ll xt;
    bool b = 0;
    sort(a, a + 4);
    ll m = a[3]; // 6
    ll s = a[2]; // 5
    ll n1, n2;
    n1 = (s + a[0]) / 2; // 3
    n2 = s - n1;
    if (n1 > 0 && n2 > 0)
    {
      if (n1 * n2 == m && n1 / n2 == a[1] && n1 <= 1e4 && n1 > 0 && n2 <= 1e4 && n2 > 0)
      {
        b = 1;
        goto label;
      }
    }
    n1 = (s + a[1]) / 2;
    n2 = s - n1;
    if (n1 > 0 && n2 > 0)
      if (n1 * n2 == m && n1 / n2 == a[0] && n1 <= 1e4 && n1 > 0 && n2 <= 1e4 && n2 > 0)
      {
        b = 1;
        goto label;
      }
    xt = s;
    s = m;
    m = xt;
    n1 = (s + a[0]) / 2;
    n2 = s - n1;
    if (n1 > 0 && n2 > 0)
    {
      if (n1 * n2 == m && n1 / n2 == a[1] && n1 <= 1e4 && n1 > 0 && n2 <= 1e4 && n2 > 0)
      {
        b = 1;
        goto label;
      }
    }
    n1 = (s + a[1]) / 2;
    n2 = s - n1;
    if (n1 > 0 && n2 > 0)
    {
      if (n1 * n2 == m && n1 / n2 == a[0] && n1 <= 1e4 && n1 > 0 && n2 <= 1e4 && n2 > 0)
      {
        b = 1;
        goto label;
      }
    }

    cout << "-1 -1\n";

  label:
    if (b == 1)
      cout << n1 << " " << n2 << "\n";
  }
  return 0;
}

// #include<iostream>
// #include<cmath>
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
//     int a[4];
//     for (int  i = 0; i < n; i++)
//     {
//       /* code */
//     }

//   }
//   return 0;
// }