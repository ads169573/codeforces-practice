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
        LL n,m;
        cin>>n>>m;
        LL ans=0;
        LL tmp=m/gcd(n,m);
        while((tmp%2)==0){
            ans+=n%m;
            n*=2;
            tmp/=2;
        }
        if(tmp!=1) cout<<-1<<endl;
        else cout<<ans<<endl;
	}
    return 0;
}