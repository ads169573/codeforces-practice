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
	int N;
    cin>>N;
    vector<LL>c(100);
    vector<LL>h(100);
    vector<LL> dp(500005);
	while(N--){
        LL n,m;
        cin>>n>>m;
        LL sum=0;
        for(int i=0,a,b;i<n;++i){
            cin>>a>>b;
            c[i]=a;
            h[i]=b;
            sum+=b;
        }
        for(auto &e:dp) e=1e18;
        LL ans=0;
        dp[0]=0;
        for(LL i=0;i<n;++i){
            for(LL j=sum+5;j>=h[i];--j){
                if(i*m>=dp[j-h[i]]+c[i]){
                    dp[j]=min(dp[j],dp[j-h[i]]+c[i]);
                    ans=max(ans,j);
                }
            }
        }
        cout<<ans<<endl;
	}
	return 0;
	
}