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
void f1(int u,map<int,vector<int>>&g,vector<int>&p,vector<int>&a){
    for(auto v : g[u]) {
        if (!p[v]){
            p[v]=u; 
            f1(v,g,p,a);
            a[u] += max(0, a[v]);
        }
    }
}
void f2(int u,int w,map<int,vector<int>>&g,vector<int>&p,vector<int>&a){
    a[u]=(a[u]<0?-1:0)+max({0,a[u],a[p[u]]});
    for(auto v:g[u]){
        if(v!=w){
            f2(v,u,g,p,a);
        }
    }
}
int main()
{	
	int N=1;
    //cin>>N;
    vector<int> a(1e6);
    vector<int> p(1e6);
	while(N--){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            a[i] = a[i]?a[i]:-1;
        }
        map<int,vector<int>> g;
        for(int i=1,x,y; i<n; i++){
            cin>>x>>y;
            g[x].push_back(y),
		    g[y].push_back(x);
        }
        p[1]=n+1;
		f1(1,g,p,a);
	    f2(1,0,g,p,a);
		
        for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
        }
        cout<<endl;
	return 0;
}
