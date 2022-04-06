#include<iostream>
#include<string>
#include<cmath>
#include<bits/stdc++.h>
#define himanshu main
#define ll long long int
					  
using namespace std;
int himanshu()
{
  int t;
  cin>>t;
  int n=0;
  while(t--)
  {
	n++;
	string s,p;	
	cin>>s;
	cin>>p;
	int f1l[26]={0};
	int f2l[26]={0};
	int f3u[26]={0};
	int f4u[26]={0};
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			f3u[s[i]-'A']++;
		}
		else if (s[i]>='a'&&s[i]<='z')
		{
			f1l[s[i]-'a']++;
		}
	}
	for(int i=0;i<p.size();i++)
	{
		if(p[i]>='A'&&p[i]<='Z')
		{
			f4u[p[i]-'A']++;
		}
		else if (p[i]>='a'&&p[i]<='z')
		{
			f2l[p[i]-'a']++;
		}
	}
	int ans=0;
	bool b=1,a=1;
	for(int i=0;i<26;i++)
	{
		if(f2l[i]>=f1l[i])
		{
			ans+=f2l[i]-f1l[i];
		}
		else if(f2l[i]<f1l[i])
		{
			b=0;
			break;
		}

	}
	for(int i=0;i<26;i++)
	{
		if(f4u[i]>=f3u[i])
		{
			ans+=f4u[i]-f3u[i];
		}
		else if(f4u[i]<f3u[i])
		{
			a=0;
			break;
		}

	}
	if(a&&b)
	{
		cout<<"Case #"<<n<<": "<<ans<<endl;
	}
	else{
		cout<<"Case #"<<n<<": IMPOSSIBLE"<<endl;
	}

	


  }
   return 0;
}