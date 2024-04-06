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
vector<int> p;
vector<int> w;
vector<int> v;
int find_(int u){
    return p[u]==u?u:p[u]=find_(p[u]);
}
int main()
{	
	int N;
    p.resize(1000010);
    w.resize(1000010);
    v.resize(1000010);
	cin>>N; 
	while(N--){
		int n;
		cin>>n;
        for(int i=1;i<=n;++i){
            p[i]=i;
            w[i]=0;
            v[i]=0;
        }
        for(int i=1;i<=n;++i){
            int a,b;
            cin>>a>>b;
            w[a]++;
            w[b]++;
            a=find_(a);
            b=find_(b);
            p[a]=b;
        }
        bool t=1;
        for(int i=1;i<=n;++i){
            v[find_(i)]++;
        }
        for(int i=1;i<=n;++i){
            if((w[i]!=2)||(v[i]&1)) t=0;
        }
        if(t) Pyes();
        else Pno();
	}
	return 0;
	
}