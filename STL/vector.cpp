#include<bits/stdc++.h>
#define himanshu main
using namespace std;

void printvec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

void printvp(vector<pair<int,int>>&v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    
}

int himanshu()
{
//   vector<int> v;
//   int n;
//   cin>>n;
//   for (int i = 0; i < n; i++)
//   {
//       int x;
//       cin>>x;
//       v.push_back(x);
//   }
//   printvec(v);

//   vector<int> a(5);
//   a.push_back(4);
//   printvec(a);
//   vector<int> b(5,3);
//   printvec(b);


// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// printvec(v);
// v.pop_back();
// printvec(v);

// vector<int> v2=v;//O(n) TC pass by  reference only 
// printvec(v2);//v2 is copy of v and will not make changes in initial values in v


    // vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    // printvp(v);

    // vector<pair<int,int>>v;
    // int n;
    // cin>>n;

    // for (int i = 0; i < n; i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});   
    // }

    // printvp(v);

    // int N;
    // cin>>N;
    // vector<int> v[N];
    // for (int i = 0; i < N; i++)
    // {
    //     int n;
    //     cin>>n;
    //     for (int j = 0; j < n; j++)
    //     {
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
        
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     printvec(v[i]);
    // }


    vector<vector<int>>v;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }

    for (int i = 0; i < N; i++)
    {
        printvec(v[i]);
    }
    
    
    
    

  
  return 0;
}   