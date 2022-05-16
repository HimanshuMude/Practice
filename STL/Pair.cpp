#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair<int,string> p;
    p=make_pair(1,"abc");

    pair<int,string> &p2=p;
    cout<<p.first<<" "<<p.second<<endl;


    p2.first=4;
    cout<<p.first<<" "<<p.second<<endl;


    pair<int,string> p1={2,"xyz"};
    cout<<p1.first<<" "<<p1.second<<endl;

    
    return 0;

}