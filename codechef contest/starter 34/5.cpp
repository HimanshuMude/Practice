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
        int n, x;
        cin >> n >> x;
        int max = x * n;
        int l = n;
        if (max > 1000)
        {
            l = l - 1;
            int num = max;
            int cons = 1000;
            while (num > 1000 || max - cons == 0)
            {
                cout << cons << " ";
                num -= cons;
                l--;
                cons--;
            }
            int i = 1, j = -1;
            if (l % 2 == 0)
            {
                int q = l / 2;
                while ((q--))
                {
                    cout << i << " ";
                    i++;
                }
                q = l / 2;
                while (q--)
                {
                    cout << j << " ";
                    j--;
                }
                cout << "\n";
            }
            else
            {
                int q = l / 2;
                int r = q;
                while ((q--))
                {
                    cout << i << " ";
                    i++;
                }
                q = l / 2;
                while (r--)
                {
                    cout << j << " ";
                    j--;
                }
                cout << "0 \n";
            }
        }
        else
        {
            
        }
    }
    return 0;
}