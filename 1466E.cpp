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
    cin>>N;
	while(N--){
        int n,mod=1e9+7;
        cin>>n;
        vector<LL> v(n);
        vector<LL> vv(60,0);
        for(int i=0;i<n;++i){
            cin>>v[i];
            for(int j=0;j<60;++j){
                vv[j]+=((v[i]>>j)&1);
            }
        }
        LL ans=0ll;
        for(int i=0;i<n;++i){
            LL a=0,b=0;
            for(int j=0;j<60;++j){
                if((v[i]>>j)&1){
                    a=(a+((1ll<<j)%mod)*vv[j])%mod;
                    b=(b+((1ll<<j)%mod)*n)%mod;
                }
                else{
                    b=(b+((1ll<<j)%mod)*vv[j])%mod;
                }
            }
            ans=(ans+a*b)%mod;
        }
        cout<<ans<<endl;
    }
	return 0;
}
