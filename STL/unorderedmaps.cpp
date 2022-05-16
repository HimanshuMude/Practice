#include<bits/stdc++.h>

using namespace std;

void print(unordered_map<int,int>&m)
{
    for(auto &a:m)
    {
        cout<<a.first<<" "<<a.second<<endl;
    }
    cout<<endl;
}

int main()
{
    // unordered_map<int,int>m;
    // m[3]=5;
    // m[2]=49;
    // m[5]=18;
    // print(m);

    unordered_map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        cout<<m[s]<<"\n";
    }
    


    return 0;

}