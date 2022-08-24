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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
            // vector<pair<int,string>>vp(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            for (int j = 0; j < x; j++)
            {
                if (s[j] == 'D')
                {
                    v[i]++;
                }
                else
                {
                    v[i]--;
                }
                if (v[i] < 0)
                {
                    v[i] = 9;
                }
                if (v[i] > 9)
                {
                    v[i] = 0;
                }
            }
        }
            // for(int i=0;i<n;i++)
            // {
            //     for(int j=0;j<vp[i].first;j++)
            //     {
            //         if(vp[i].second[j]=='D')
            //         {
            //             v[i]++;
            //         }
            //         if(vp[i].second[j]=='U')
            //         {
            //             v[i]--;
            //         }
            //         if(v[i]>9)
            //         {
            //             v[i]=0;
            //         }
            //         if(v[i]<0)
            //         {
            //             v[i]=9;
            //         }
            //     }
            // }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}