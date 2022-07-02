	#include<bits/stdc++.h>
	using namespace std;

	void solve(){
		int m;
		cin>>m;
		vector<int>coins(m);
		for(auto &i:coins)
		{
			cin>>i;
		}
		sort(coins.begin(),coins.end());
		int ans=0;
		for(int i=m/3;i<m;i+=2)
		{
			ans+=coins[i];
		}

		cout<<ans<<"\n";

	}

	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
		return 0;
	}