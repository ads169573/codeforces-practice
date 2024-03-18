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
        for(auto &e:a) cin>>e;
        for(auto &e:b) cin>>e;
        for(int i=0;i<n;++i){
            aa.push({a[i]+b[i],i});
        }

        LL ans=0;
        for(int i=0;i<n;++i){
            int idx=aa.top().second;
            aa.pop();
            if((i%2)==0{
                ans+=a[idx]-1;
            }
            else{
                ans-=b[idx]-1;
            }
        }
        cout<<ans<<endl;
	}
    return 0;
}