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

int main()
{	
	int N=1;
    //cin>>N;
	while(N--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        vector<vector<int>> dp(5005,vector<int>(5005));
        int ans=0;
        for(int i=n-1;i>=0;--i){
            for(int j=m-1;j>=0;--j){
                ans=max(ans,dp[i][j]=max({0,dp[i][j+1]-1,dp[i+1][j]-1,dp[i+1][j+1]+2-5005*(a[i]!=b[j])}));
            }
        }
        cout<<ans<<endl;
	}
	return 0;
	
}