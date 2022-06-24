	#include<bits/stdc++.h>
	using namespace std;

	void solve(){
		long long int n;
		cin>>n;
		long long int gcd;
		cin>>gcd;
		vector<int>v;
		v.push_back(gcd);
		for (long long int i = 1; i < n; ++i)
		{
			long long int x;
			cin>>x;
			v.push_back(x);
			gcd=__gcd(x,gcd);	
		}
		if(gcd==1) cout<<"0\n";
		else{
			int cnt=0;
			for(int &i: v)
			{
				if(i%gcd==0)
				{
					cnt++;

				}
			}
			cout<<cnt<<"\n";
		}


	}

	int main()
	{
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
		freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
		#endif
		long long int t;
		cin>>t;
		while(t--)
		{
			solve();
		}
		return 0;
	}