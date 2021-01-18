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
    //cout<<"Enter n:"<<endl;
    cin>>n;
    vi a(n);
    //cout<<"Enter elements:"<<endl;
    rep(i,n)
    cin>>a[i];
    int sum=0,m=INT_MAX; 
    int l=0,r=n-1; 
    int m1=l,m2=n-1; 
    if(n < 2) 
    { 
        cout << "WRONG INPUT"; 
        return 0; 
    } 
    sort(a.begin(),a.end());
    while(l<r) 
    { 
        sum = a[l]+a[r]; 
        if(abs(sum)<abs(m)) 
        { 
            m=sum; 
            m1=l; 
            m2=r; 
        } 
        if(sum<0) 
            l++; 
        else
            r--; 
    } 
    cout<<"The minimum elements:"<< a[m1]<<" and "<<a[m2];
	return 0;
}

