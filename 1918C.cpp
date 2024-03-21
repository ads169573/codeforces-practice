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
        LL a,b,r;
        cin>>a>>b>>r;
        if(a<b) swap(a,b);
        LL ans=a-b;
        for(int i=log2(a^b)-1;i>=0;--i){
            LL tmp = 1LL<<i;
            if(r>=tmp && ((a>>i)&1)&&(!((b>>i)&1))){
                r-=tmp;
                ans-=tmp<<1;
            }
        }
        cout<<ans<<endl;
	}
    return 0;
}