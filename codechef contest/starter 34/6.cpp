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
        int max = n * x;
        if (max > 1000)
        {
            int con = 1000;
            while (max > 1000 && n > 0)
            {
                cout << con << " ";
                con--;
                n--;
            }
            if (n > 0)
            {
                int l = n;
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
        }
        else
        {
            int l = n - 1;
            int l = n;
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
    }
    return 0;
}