        /* ------------------------*/
        /*  Author: Himanshu Mude  */
        /*------------------------*/


    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define gcj "Case #"    
    #define pb push_back
    #define all(_obj) _obj.begin(), _obj.end()
    #define F first
    #define S second
    #define pll pair<ll, ll>
    #define vll vector<ll>
    ll INF = 1e18;
    const int N = 1e5 + 11, mod = 1e9 + 7;
    #define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());




    /*------------------- Code Starts Here --------------------*/


    
    void solve(){
        ll n;
        cin>>n;
        if(n==1)  cout<<"2\n";
        else if(n==2)  cout<<"1\n";
        else {
            cout<<(n+2)/3<<"\n";
        }
    }




    int main()
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
        freopen("Output3.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
        #endif
        fastio;
        long long int t;
        cin>>t;
        while(t--)
        {
            solve();
        }
        return 0;
    }