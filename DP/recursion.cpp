#include "bits/stdc++.h"
using namespace std;

void rec(int idx,int sum,vector<int>&ds,vector<int>&v,int k)
{
	if(idx>=v.size() && sum+v[idx]==k)
	{
		for(auto &it:ds) cout<<it<<" ";
		cout<<"\n";
		return;
	}
	if(sum+v[idx]==k)
	{
		for(auto &it:ds) cout<<it<<" ";
		cout<<"\n";
		sum+=v[idx];
		return;
	}

	//pick
	ds.push_back(v[idx]);
	rec(idx+1,sum+v[idx],ds,v,k);
	ds.pop_back();
	rec(idx+1,sum,ds,v,k);
}

int main()
{
	vector<int> v={1,2,1};
	vector<int>ds;
	rec(0,0,ds,v,2);

}