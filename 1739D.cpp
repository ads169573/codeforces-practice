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
int chk(vector<int>&v,int n,int m){
    int res=0;
    vector<int> f(n+1);
    for(int i=n;i>1;i--) {
        if(v[i]!=1){
            if(f[i]>=m-1){
                res++; 
                f[i]=0;
            }
            else{
                f[v[i]]=max(f[v[i]],f[i]+1);
            }
        }
    }
    
    return res;
}
int main(){
    int N;
    cin>>N;
	while(N--){
        int n,k; cin>>n>>k;
        vector<int> v(n+1);
        for(int i=2;i<=n;i++) cin>>v[i];
    
        int l=1,r=n;
        while(l<r){
            int m=(l+r)/2;
            if(chk(v,n,m)>k) l=m+1;
            else r=m;
        }
      cout<<l<<"\n";
	}
    return 0;
}