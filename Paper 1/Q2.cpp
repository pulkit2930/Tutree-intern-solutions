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
    vector<double>v(n);
    rep(i,n)
    cin>>v[i];
    priority_queue<double>pq; 
    priority_queue<double,vector<double>,greater<double> >pq1; 
    double m=v[0]; 
    pq.push(v[0]); 
    cout<<m<<endl; 
    FOR(i,1,n)
    { 
        double x=v[i]; 
        if (pq.size()>pq1.size()) 
        { 
            if(x<m) 
            { 
                pq1.push(pq.top()); 
                pq.pop(); 
                pq.push(x); 
            } 
            else
                pq1.push(x); 
  
            m=(pq.top()+pq1.top())/2.0; 
        } 
        else if(pq.size()==pq1.size()) 
        { 
            if(x<m) 
            { 
                pq.push(x); 
                m=(double)pq.top(); 
            } 
            else
            { 
                pq1.push(x); 
                m=(double)pq.top(); 
            } 
        } 
        else
        { 
            if (x>m) 
            { 
                pq.push(pq1.top()); 
                pq1.pop(); 
                pq1.push(x); 
            } 
            else
                pq.push(x); 
            m=(pq.top()+pq1.top())/2.0; 
        } 
        cout<<m<<endl; 
    } 
	return 0;
}

