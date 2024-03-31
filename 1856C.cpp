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
bool f(int k,vector<int>&v,int m){
    int n=v.size();
    for(int i=0;i<n;++i){
        LL tmp=0;
        for(int j=i;j<n;++j){
            if(v[j]<(m-j+i)) tmp+=m-j+i-v[j];
            else if(tmp<=k) return 1;
        }
    }
    return 0;
}
int main(){	
	int N;
	cin>>N;
	while(N--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(auto &e:v) cin>>e;
        int l=1,r=2e8;
        while(l<r){
            int m=(l+r+1)/2;
            if(f(k,v,m)){
                l=m;
            }
            else {
                r=m-1;
            }
        }
        cout<<l<<endl;

	}
	return 0;
	
}