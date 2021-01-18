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
    vi a(n);
    rep(i,n)
    cin>>a[i];
    int x,y;
    cin>>x>>y;
    int p=-1,m1=INT_MAX; 
    rep(i,n) 
    { 
        if(a[i]==x or a[i]==y) 
        { 
            if( p!=-1 and a[i]!=a[p]) 
                m1=min(m1, i-p); 
            p=i; 
        } 
    } 
    if(m1==INT_MAX) 
        cout<<-1; 
    else
    cout<<m1; 
	return 0;
}

