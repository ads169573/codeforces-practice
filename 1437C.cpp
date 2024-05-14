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
int f(vector<int>&v,vector<vector<int>>&dp,int p,int i){
    if(i==v.size()) return 0;
    if(p>=400) return 1e6;
    if(dp[i][p]!=-1) return dp[i][p];
    int ans=abs(v[i]-p)+f(v,dp,p+1,i+1);
    for(int j=p;j<=400-i;++j){
        ans=min(ans,abs(v[i]-j)+f(v,dp,j+1,i+1));
    }
    return dp[i][p]=ans;
}
int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int,int> mp;
        for(auto &e:v) cin>>e,mp[e]++;
        sort(v.begin(),v.end());
        vector<vector<int>> dp(200,vector<int>(400,-1));
        
        cout<<f(v,dp,1,0)<<endl;
	}
	return 0;
	
}