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
        int r,g,b;
        cin>>r>>g>>b;
        vector<int> vr(300);
        vector<int> vg(300);
        vector<int> vb(300);
        for(int i=1;i<=r;++i) cin>>vr[i];
        for(int i=1;i<=g;++i) cin>>vg[i];
        for(int i=1;i<=b;++i) cin>>vb[i];
        vector<vector<vector<int>>> dp(300,vector<vector<int>>(300,vector<int>(300)));
        sort(vr.begin()+1,vr.begin()+1+r);
        sort(vg.begin()+1,vg.begin()+1+g);
        sort(vb.begin()+1,vb.begin()+1+b);
        int ans=0;
        for(int i=0; i<=r;++i){
            for(int j=0; j<=g;++j){
                for(int k=0; k<=b;++k){
                    if(i&&j) dp[i][j][k]=max(dp[i][j][k],dp[i-1][j-1][k]+vr[i]*vg[j]);
                    if(j&&k) dp[i][j][k]=max(dp[i][j][k],dp[i][j-1][k-1]+vg[j]*vb[k]);
                    if(i&&k) dp[i][j][k]=max(dp[i][j][k],dp[i-1][j][k-1]+vr[i]*vb[k]);
                    ans=max(ans,dp[i][j][k]);
                }
            }
        }
        cout<<ans<<endl;
	}
	return 0;
	
}