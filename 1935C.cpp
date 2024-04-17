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
        int n,l;
        cin>>n>>l;
        vector<pair<int,int>> v(n);
        for(auto &e:v) cin>>e.S>>e.F;
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;++i){
            PQ<int> pq;
            int s=0;
            for(int j=i;j<n;++j){
                pq.push(v[j].S);
                s+=v[j].S;
                while((!pq.empty())&&(s+v[j].F-v[i].F>l)){
                    s-=pq.top();
                    pq.pop();
                }
                int sz=pq.size();
                ans=max(ans,sz);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}