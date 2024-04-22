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
#define Pyes() cout<<"YES\n"
#define Pno() cout<<"NO\n"
/*std = c++2a*/
int mod=1e9+7;
int mod2=998244353;
LL f(vector<LL>&v,LL m){
    LL s=m;
    for(int i=0;i<v.size();++i) {
        s+=v[i];
        if((s<m)) s=m;
    }
    return s;
}
int main()
{	
	int N;
    cin>>N;
	while(N--){
        LL n;
        cin>>n;
        vector<LL> v(n);
        vector<LL> vv(n);
        vector<LL> vvv(n);
        LL s=0LL;
        
        for(int i=0;i<n;++i){
            cin>>v[i];
            s+=v[i];
            vv[i]=s;
        }
        vvv[n-1]=vv[n-1];
        for(int i=n-2;i>=0;--i){
            vvv[i]=min(vvv[i+1],vv[i]);
        }
        LL t = 0LL;
        LL ans=vv[n-1]+max(0LL,-vvv[0]);
        s=0LL;
        for(int i=0;i<n;++i){
            s=max(s,vv[i]);
            if(vv[i]==s){
                LL tmp=vv[n-1]+max(0LL,s-vvv[i]);
                if(tmp>ans){
                    ans=tmp;
                    t=s;
                }
            }
        }
        cout<<t<<endl;
    }
	return 0;
}