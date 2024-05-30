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
        int n,q;
        cin>>n>>q;
        map<LL,vector<int>> mp;
        for(int i=0;i<n;++i){
            long long tmp;
            cin>>tmp;
            mp[tmp].emplace_back(i);
        }
        vector<int> v(q);
        for(int i=0;i<q;++i) cin>>v[i];
        vector<LL> ret(n);
        for(auto [k,vec]:mp){
            LL tmp=k;
            for(int i =0;i<q;++i){
                if((tmp%(1LL<<v[i]))==0){
                    tmp+=(1LL<<(v[i]-1));
                }
                if(tmp%2)break;
            }
            for(auto &e:vec) ret[e]=tmp;
        }
        for(auto &e:ret) cout<<e<<" ";
        cout<<endl;
	}
    return 0;
}