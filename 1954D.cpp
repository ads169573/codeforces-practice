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
int mod2=998244353;
int main()
{	
	int N;
    N=1;
    vector<LL>dp(2e5+1,0);
	while(N--){
        int n;
        cin>>n;
        vector<LL> v(n);
        for(auto &e:v) cin>>e;
        sort(v.begin(),v.end());
        dp[0] = 1;
        LL ans=0;
        for(int i=0;i<n;++i){
            for(LL j=5000;j>=v[i];--j){
                ans=(ans+max(v[i],((j+1)/2))*dp[j-v[i]])%mod2;
                dp[j] = (dp[j]+dp[j-v[i]])%mod2;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
