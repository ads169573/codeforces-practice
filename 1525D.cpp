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
        vector<int>v(5002);
        vector<int> vv(5002,0);
        vector<int> dp(5002,1e9);
        int m=0;
        for(int i=1;i<=n;++i){
            cin>>v[i];
            if(v[i]==1) vv[++m]=i;
        } 
        dp[0]=0;
        for(int i=1;i<=n;++i){
            if(!v[i]){
                for(int j=m;j>=1;--j){
                    dp[j]=min(dp[j],dp[j-1]+abs(i-vv[j]));
                }
            }
        }
        
        cout<<dp[m]<<endl;
    }
	return 0;
}
