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
int main(){	
	int N;
	cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &e:v) cin>>e;
        int l=1e9,r=-1e9;
        for(int i=0;i<n;++i){
            int t;
            cin>>t;
            l=min(l,v[i]-t);
            r=max(r,v[i]+t);
        }
        r+=l;
        cout<<r/2;
        if(r%2) cout<<".5";
        cout<<"\n";

	}
	return 0;
	
}