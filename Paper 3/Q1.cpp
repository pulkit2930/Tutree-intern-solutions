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
    int n,i,m,j;
    cin>>n;
    vi a(n);
    rep(i,n)
    cin>>a[i];
    cin>>m;
    vi b(m);
    rep(i,m)
    cin>>b[i];
    //UNION
    cout<<"UNION: ";
    int x=a[n-1]; 
    int y=b[m-1]; 
    int ans = 0; 
    if(x>y) 
    ans=x; 
    else
    ans=y; 
    int freq[ans+1]; 
    memset(freq,0,sizeof(freq));
    cout<<a[0]<<" "; 
    ++freq[a[0]]; 
    FOR(i,1,n) 
    { 
        if(a[i]!=a[i-1]) 
        { 
            cout<<a[i]<<" "; 
            freq[a[i]]++; 
        } 
    } 
    rep(j,m)
    { 
        if(freq[b[j]]==0) 
        { 
            cout<<b[j]<<" "; 
            freq[b[j]]++; 
        } 
        //cout<<freq[b[j]]<<endl;
    } 
    //INTERSECTION
    cout<<endl;
    i=0,j=0; 
    cout<<"INTERSECTION:";
    while(i<n and j<m) 
    { 
       if (a[i]<b[j]) 
       i++; 
       else if(b[j]<a[i]) 
       j++; 
       else
       { 
          cout<<b[j]<<" "; 
          i++; 
          j++; 
        } 
    } 
	return 0;
}

