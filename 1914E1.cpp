#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define PINT pair<int,int>
template <class T>
using  RPQ =  priority_queue<T,vector<T>,greater<T>>;
template <class T>
using PQ =  priority_queue<T>;
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        PQ<PINT>aa;
        PQ<PINT>bb;
        for(auto &e:a) cin>>e;
        for(auto &e:b) cin>>e;
        for(int i=0;i<n;++i){
            aa.push({a[i]+b[i],i});
            bb.push({a[i]+b[i],i});
        }
        vector<bool> v(n,0);
        LL ans=0;
        for(int i=0;i<n;++i){
            if((i%2)==0){
                while((!aa.empty())&&v[aa.top().second]){
                    aa.pop();
                }
                v[aa.top().second]=1;
                
                ans+=a[aa.top().second]-1;
                aa.pop();
            }
            else{
                while((!bb.empty())&&v[bb.top().second]){
                    bb.pop();
                }
                v[bb.top().second]=1;
                
                ans-=b[bb.top().second]-1;
                bb.pop();
            }
            
        }
        cout<<ans<<endl;
	}
    return 0;
}