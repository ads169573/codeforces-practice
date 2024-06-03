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
/*std = c++2a*/

int main(){
    int N;
    cin>>N;
	while(N--){
        LL n,m,k;
        cin>>n>>m>>k;
        LL ans=0;
        map<LL,RPQ<LL>> mp;
        vector<pair<LL,LL>> f;
        set<LL> s;
        for(int i = 0;i<k;++i){
            LL a,b;
            cin>>a>>b;
            f.emplace_back(a,b);
            mp[b].push(n-a);
            s.insert(b);
        }
        LL p=n,q=1;
        
        map<pair<int,int>,int> mmp;
        for(auto b:s){
            if(mp[b].top()<p){
                ans+=(b-q)*p;
                p=mp[b].top();
                q=b;
                mmp[{n-p,q}]=1;
            }
        }
        ans+=(m-q+1)*p;
        cout<<ans<<endl;
        
        for(int i=0;i<k;++i){
            cout<<mmp.count(f[i])<<" ";
        }
        cout<<endl;
	}
    return 0;
}
