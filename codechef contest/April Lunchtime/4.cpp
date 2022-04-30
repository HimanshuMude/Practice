#include <iostream>
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
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        ll c1 = 0;
        ll c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                c1++;
            }
            if (a[i] == 2)
            {
                c2++;
            }
        }
        // 1 2 2 3 1
        
        while (c1 > 0)
        {
            ans += (n - c1);
            c1--;
        }
        
        while (c2> 0)
        {
            ans += (c2 - 1);
            c2--;
        }

        cout << ans << "\n";
    }
    return 0;
}