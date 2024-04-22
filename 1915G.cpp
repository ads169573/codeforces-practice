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
        int n,m;
        cin>>n>>m;
        vector<LL> s(n+1);
        vector<vector<pair<LL,LL>>> g(n+1);
        for(int i=0;i<m;++i){
            LL a,b,c;
            cin>>a>>b>>c;
            g[a].push_back({b,c});
            g[b].push_back({a,c});
        }
            
        for(int i=1;i<=n;++i){
            cin>>s[i];
        }
        RPQ<vector<LL>> pq;
        pq.push({0,1,s[1]});
        vector<LL> vv(n+1,1e9);
        vector<LL> vvv(n+1,1e9);
        LL ans;
        while(!pq.empty()){
            LL a=pq.top()[0],b=pq.top()[1],c=pq.top()[2];
            pq.pop();
            if(b==n) {
                ans=a;
                break;
            }
            if((vv[b]<=c)&&(vvv[b]<=a)) continue;
            vv[b]=min(vv[b],c);
            vvv[b]=min(vvv[b],a);
            c=min(c,s[b]);
            for(auto [k,e]:g[b]){
                pq.push({e*c+a,k,c});
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
