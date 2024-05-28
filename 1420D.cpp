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
LL fac[300005];
LL inv(int x)
{
	return x==1?1:(mod2-(mod2/x)*inv(mod2%x)%mod2);
}
LL c(int n,int m)
{
    if(n<m) return 0;
	return m==0||m==n?1:fac[n]*inv(fac[m])%mod2*inv(fac[n-m])%mod2;
}
int main()
{
	int N=1;
    //cin>>N;
    fac[0]=1;
	for(int i=1;i<300005;i++) fac[i]=fac[i-1]*i%mod2;
	while(N--){
        int n,m;
        cin>>n>>m;
        RPQ<pair<int,int>> pq;
        for(int i=0,l,r;i<n;++i){
            cin>>l>>r;
            pq.emplace(l,1);
            pq.emplace(r+1,-1);
        }
        int cnt=0;
        LL ans=0;
        while(!pq.empty()){
            if(pq.top().S==1&&(cnt>=m-1)){
                ans+=c(cnt,m-1);
                ans%=mod2;
            }
            cnt+=pq.top().S;
            pq.pop();
        }
        cout<<ans<<endl;
    }
	return 0;
}
