#include<bits/stdc++.h>
using namespace std;
#define LL long long
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        int n,m;
        cin>>n;
        vector<LL>v(n+1);
        for(int i=0;i<n;++i){
            LL a;
            cin>>a;
            v[a]++;
        }
        LL ans = 0ll;
        LL pre = 0ll;
        for(int i=0;i<=n;++i){
            ans+=1ll*(v[i]*(v[i]-1))/2*pre;
            ans+=1ll*(v[i]*(v[i]-1)*(v[i]-2))/6;
            pre+=1ll*v[i];
        }
        cout<<ans<<endl;
	}
    return 0;
}