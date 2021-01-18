#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,a,b) for(i= a ; i < b ; ++i)
#define rep(i,n) FOR(i,0,n)
#define rev(i,n) for(i=n-1;i>=0;i--)
#define INF INT_MAX
#define pb push_back
#define tc int t;cin>>t;while(t--)
#define ll long long int
#define mod (ll)(1e9 + 7)
#define vi vector<int>
#define vll vector<ll>
#define endl "\n"
#define si set<int>
#define ll long long int
int main() {
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //graph();
    int n,i;
    cin>>n;
    vi v(n),ans;
    rep(i,n)
    cin>>v[i];
    ans.pb(v[n-1]);
    int max=v[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(v[i]>max)
        {
            ans.pb(v[i]);
            max=v[i];
        }
    }
    reverse(ans.begin(),ans.end());
    rep(i,ans.size())
    cout<<ans[i]<<" ";
    cout<<endl;
    
	return 0;
}

