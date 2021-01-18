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

int main() 
{ 
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //graph();
    ll n,i;
    cin>>n;
    vll v(n);
    rep(i,n)
    cin>>v[i];
    if(n<2)
    cout<<"WRONG INPUT"<<endl;
    else
    {
        ll first=LONG_MAX,second=LONG_MAX;
        rep(i,n)
        {
            if(v[i]<first)
            {
                second=first;
                first=v[i];
            }
            if(v[i]<second and v[i]!=first)
            second=v[i];
        }
        if(second==LONG_MAX)
        cout<<"NO 2nd ELEMENT"<<endl;
        else
        cout<<"FIRST "<<first<<" SECOND "<<second<<endl;
    }
    return 0;
}
