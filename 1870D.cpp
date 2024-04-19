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
void f(vector<int>&ret,int l,int r,int k,vector<int>&v,int pp){
    if(l==r) return;
    int p=l,mm=0;
    for(int i=l;i<r;++i){
        if((v[i]>0)&&((k/v[i])>=mm)){
            p=i; 
            mm=k/v[i];
        } 
    }
    int m=v[p];
    if(v[p]<=0) return;
    for(int i=l;i<r;++i){
        v[i]-=m;
    }
    ret[p]=min(k/m,pp);
    if(k>m){
        k%=m;
        if(k){
            f(ret,p+1,r,k,v,ret[p]);
        }
    }
    for(int i=p-1;i>=l;--i){
        ret[i]=ret[p];
    }
}
int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n,k;
        cin>>n;
        vector<int> ret(n,0);
        PQ<pair<int,int>> pq;
        vector<int> v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        cin>>k;
        f(ret,0,n,k,v,1e9);
        for(auto &e:ret) cout<<e<<" ";
        cout<<'\n';
    }
	return 0;
}
