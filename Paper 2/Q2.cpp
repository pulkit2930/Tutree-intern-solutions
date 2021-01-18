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
    int n;
    cin>>n;
    int i,j,k,space=2*n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
        for(k=space-2*i;k>0;k--)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    for(i=n-1;i>0;i--)
    {
        for(j=1;j<=i;j++)
        cout<<"*";
        for(k=space-2*i;k>0;k--)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
	return 0;
}

