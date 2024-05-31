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
        LL m,k,a,b;
        LL ans=0;
        cin>>m>>k>>a>>b;
        if(m>=k*b){
            m-=k*b;
            b=0;
            if(m>=a){
                ans = m/k + max(0LL,(m%k)-a);
                for(LL i=max(0LL,a/k-1);(i*k)<=a;++i){
                    ans=min(ans,m/k-i+max(0LL,(m%k)-(a-i*k)));
                }
            }
        } 
        else{
            b=b-(m-(m%k))/k;
            m%=k; 
            if(m>=a) {
                m-=a;
                ans+=m;
            }
        } 
        
        cout<<ans<<endl;
	}
    return 0;
}