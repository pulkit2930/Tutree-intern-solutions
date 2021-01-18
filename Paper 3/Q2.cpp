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
void rotate(int a[],int d,int n) 
{ 
    d=d%n; 
    int g=__gcd(d, n),i; 
    rep(i,g)
    { 
       int t=a[i]; 
       int j=i; 
       while(true)
       { 
          int k=j+d; 
          if(k>=n) 
          k-=n; 
          if(k == i) 
          break;
          a[j]=a[k]; 
          j=k; 
       } 
        a[j]=t; 
    }
    rep(i,n)
    cout<<a[i]<<" ";
} 
int main() {
    fastio;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //graph();
    int n,i,d,j;
    cin>>n;
    int a[n];
    rep(i,n)
    cin>>a[i];
    cin>>d;
    rotate(a,d,n);
	return 0;
}

