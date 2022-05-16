#include <bits/stdc++.h>
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
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        if (n == 1)
        {
            cout << v[0] << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            ll ans = INT_MIN;
            ll maxm = v[0];
            
            for (int i = 0; i < n-1; i++)
            {

                if (v[i] == v[i + 1])
                {
                    maxm++;
                }
                else
                {
                    maxm = v[i + 1];
                }
                ans = max(maxm, ans);
            }

            cout << ans << endl;
        }
    }
    return 0;
}