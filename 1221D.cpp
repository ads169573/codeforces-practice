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
    vector<vector<LL>> dp(3e5+5,vector<LL>(3));
    vector<LL> a(3e5+5),b(3e5+5);
	while(N--){
        int n;
        cin>>n;
        for(int i=1;i<=n;++i){
            cin>>a[i]>>b[i];
            dp[i][0]=1e18;
            dp[i][1]=1e18;
            dp[i][2]=1e18;
        }
        for(int i=1;i<=n;i++){
			for(int j=0;j<=2;j++){
                for(int k=0;k<=2;k++){
                    if(a[i]+j!=a[i-1]+k){
                        dp[i][j]=min(dp[i][j],dp[i-1][k]+1LL*j*b[i]);
                    }
                }
            }
		}
        cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<endl;
	}
	return 0;
	
}