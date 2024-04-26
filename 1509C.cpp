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
	int N=1;
    //cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<LL> v(n);
        vector<LL> dp1(n),dp0(n);
        for(auto &e:v) cin>>e;
        sort(v.begin(),v.end());
        for(int i=1;i<n;++i){
            for(int j=i;j<n;++j){
                dp1[j]=min(dp0[j-1],dp0[j])+v[j]-v[j-i];
            }
            swap(dp0,dp1);
        }
        cout<<dp0[n-1]<<endl;
    }
	return 0;
}
