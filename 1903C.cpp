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
        int n;
        cin>>n;
        vector<LL> v(n);
        for(auto &e:v) cin>>e;
        LL ans=0LL,sum=0LL,now=0LL;
        bool chk=1;
        for(int i=n-1;i>=0;--i){
            now+=v[i];
            if(sum+now>0){
                ans+=sum+now;
                sum+=now;
                now=0;
                if(i==0) chk=0;
            }
        }
        if(chk)
            ans+=sum+now;
        cout<<ans<<endl;
	}
    return 0;
}