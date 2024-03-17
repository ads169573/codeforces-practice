#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define RPQ(T) priority_queue<T,vector<T>,greater<T>>
#define PQ(T) priority_queue<T>
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        LL n,m;
        cin>>n>>m;
        vector<LL> v(n+1,0);
        
        for(int i=1;i<=n;++i){
            long long tmp;
            cin>>tmp;
            v[i]=v[i-1]+(tmp==1?-1:tmp-1);
        } 
        
        for(int i=0;i<m;++i){
            int l,r;
            cin>>l>>r;
            if((r!=l)&&((v[r]-v[l-1])>=0)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        
	}
    return 0;
}