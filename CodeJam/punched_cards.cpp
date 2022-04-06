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
    int n=1;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        cout<<"Case #"<<n<<":\n";
        for (int i = 1; i <= 2 * c + 1; i++)
        {
            if (i == 1 || i == 2)
            {
                cout << ".";
            }
            else
            {
                if (i % 2 == 0)
                {
                    cout << "-";
                }
                else
                {
                    cout << "+";
                }
            }
        }
        cout << "\n";

        for (int i = 1; i <= 2 * c + 1; i++)
        {
            if (i == 1 || i == 2)
            {
                cout << ".";
            }
            else
            {
                if (i % 2 == 0)
                {
                    cout << ".";
                }
                else
                {
                    cout << "|";
                }
            }
        }
        cout << "\n";

        for (int i = 3; i <= (2 * r +1); i++)
        {
            if (i % 2 == 1)
            {
                for (int j = 1; j <= 2 * c + 1; j++)
                {
                    if(j%2==0)
                    {
                        cout<<"-";
                    }
                    else
                    {
                        cout<<"+";
                    }
                }
                cout<<"\n";
            }

            else
            {
                for (int j = 1; j <= 2 * c + 1; j++)
                {
                    if(j%2==0)
                    {
                        cout<<".";
                    }
                    else
                    {
                        cout<<"|";
                    }
                }
                cout<<"\n";
            }
        }
        n++;
    }
    return 0;
}

/*for (int i = 0; i < 2 * r + 1; i++)
        {
            for (int j = 0; j < 2 * c + 1; j++)
            {
                if (i == 0)
                {
                    cout << ".. ";
                    for (int k = 0; k < 2 * c - 1; k++)
                    {
                        if (k % 2 == 2)
                        {
                            cout << "+";
                        }
                        else
                        {
                            cout << "-";
                        }
                    }
                    cout << "\n";
                }
                else if (i == 1)
                {
                    cout << ".. ";
                    for (int k = 0; k < 2 * c - 1; k++)
                    {
                        if (k % 2 == 2)
                        {
                            cout << "|";
                        }
                        else
                        {
                            cout << ".";
                        }
                    }
                    cout << "\n";
                }

                else
                {
                    if (i % 2 == 0&&i!=0&&i!=1)
                    {
                        for (int k = 0; k < 2 * c +1; k++)
                        {
                            if (k % 2 == 2)
                            {
                                cout << "+";
                            }
                            else
                            {
                                cout << "-";
                            }
                        }
                        cout << "\n";
                    }
                    else
                    {
                        for (int k = 0; k < 2 * c +1; k++)
                        {
                            if (k % 2 == 2)
                            {
                                cout << "|";
                            }
                            else
                            {
                                cout << ".";
                            }
                        }
                        cout << "\n";
                    }
                }
            }
        }*/