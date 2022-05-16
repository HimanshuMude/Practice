#include<bits/stdc++.h>
#define himanshu main
using namespace std;
                   
int himanshu()
{
    vector<int>v={1,2,3,4,5};
    // vector<int> :: iterator it=v.begin();
    // cout<<(*it)+100<<endl;
    vector <pair<int,int>> v1={{1,2},{2,3},{3,4}};
    vector <pair<int,int>> :: iterator it;
    for(it=v1.begin();it!=v1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;

    for(auto &it:v)
    {
        cout<<it<<" ";
    }
    

    return 0;
}   