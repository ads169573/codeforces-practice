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
vector<int>a;
vector<int>b;
vector<int>c;
vector<vector<int>> g;
vector<bool> v;
LL ans;
int cnt;
void f(int x,int p,int n){
    cnt++;
    a[x]=cnt;
    b[x]=cnt;
    c[x]=1;
    v[x]=1;
    for(auto y:g[x]){
        if(y!=p){
            if(!v[y]){
                f(y,x,n);
                c[x]+=c[y];
            }
            b[x]=min(b[x],b[y]);
        }
    }
    if(a[x]==b[x])
        ans=max(ans,1LL*c[x]*(n-c[x]));
}
int main()
{	
	int N;
	cin>>N;
    g.resize(1e5+10);
    a.resize(1e5+10);
    b.resize(1e5+10);
    c.resize(1e5+10);
    v.resize(1e5+10);
	while(N--){
        LL n,m;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            g[i].clear();
            v[i]=0;
            a[i]=0;
            b[i]=0;
            c[i]=0;             
        }
        while(m--){
            int x,y;
            cin>>x>>y;
            g[x].emplace_back(y);
            g[y].emplace_back(x);
        }
        cnt = 0;
        ans = 0;
        f(1,0,n);
        cout<<n*(n-1)/2-ans<<endl;
    }
	return 0;
	
}

