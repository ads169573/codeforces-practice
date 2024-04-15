#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define PINT pair<int,int>
template <class T>
using  RPQ =  priority_queue<T,vector<T>,greater<T>>;
template <class T>
using PQ =  priority_queue<T>;
#define F first
#define S second
#define Pyes() cout<<"YES\n"
#define Pno() cout<<"NO\n"
/*std = c++2a*/
int mod=1e9+7;
vector<vector<LL>> dp;
vector<LL> v;
LL f(int i,LL k,LL n,int e){
    if(i==n) return 0;
    if(e==30) return 0;
    if(dp[i][e]!=-1e15) return dp[i][e];
    LL d=1LL*pow(2,e);
    LL ans=v[i]/d+f(i+1,k,n,e)-k;
    d*=2LL;
    ans=max(ans,v[i]/d+f(i+1,k,n,e+1));
    return dp[i][e]=ans;
}
int main()
{	
	int N;
    cin>>N;
    dp.resize(1e5,vector<LL>(32));
    v.resize(1e5);
	while(N--){
        LL n,k;
        cin>>n>>k;
        for(int i=0;i<n;++i){
            cin>>v[i];
            for(int j=0;j<32;++j) dp[i][j]=-1e15; 
        }
        cout<<f(0,k,n,0)<<endl;
	}
	return 0;
	
}