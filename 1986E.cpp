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
LL f(vector<vector<LL>>&dp,vector<LL>&v,int i,int j){
    if(i==v.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    LL ans;
    if(j){
        ans=v[i+1]-v[i]+f(dp,v,i+2,j);
    }
    else{
        if(i==v.size()-1) return 0;
        ans=min(v[i+1]-v[i]+f(dp,v,i+2,j),f(dp,v,i+1,1));
        if((i+2)<v.size())
            ans=min(ans,v[i+2]-v[i]+f(dp,v,i+3,1));
    }
    return dp[i][j]=ans;
}
int main()
{	
	int N;
	cin>>N;
	while(N--){
        LL n,k;
        cin>>n>>k;
        map<int,vector<LL>> mp;
        for(int i=0,j;i<n;++i){
            cin>>j;
            mp[j%k].emplace_back(j);
        }
        if(n==1) {
            cout<<0<<endl;
            continue;
        }
        int o=0;
        for(auto [kk,vv]:mp){
            if(vv.size()%2){
                o++;
            } 
        }
        if(o!=(n%2)){
            cout<<-1<<endl;
        }
        else{
            LL ans=0LL;
            for(auto [kk,v]:mp){
                vector<LL> vv = v;
                sort(vv.begin(),vv.end());
                if(vv.size()%2){
                    vector<vector<LL>> dp(vv.size(),vector<LL>(2,-1));
                    ans+=(f(dp,vv,0,0)/k);
                }
                else{
                    for(int i=0;i<vv.size();i+=2){
                        ans+=1LL*(vv[i+1]-vv[i])/k;
                    }
                }
            }
            cout<<ans<<endl;
            //cout<<endl;
        }
    }
	return 0;
	
}