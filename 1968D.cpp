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
unordered_map<int,LL> bs;
vector<LL> a,b;
LL f(int &k,int p,LL &m,int c){
    if(c==k) return 0;
    if(a[p]==m) return 1LL*(k-c)*m;
    if(b[p]==p) return 1LL*(k-c)*a[p];
    bs[p]=1;
    LL ans=a[p]*1LL*(k-c);
    if(!bs.count(b[p]))
        ans=max(ans,a[p]+f(k,b[p],m,c+1));
    return ans;
}
int main()
{	
	int N;
    cin>>N;
    a.resize(200005);
    b.resize(200005);
    
	while(N--){
        int n,k,pa,pb;
        cin>>n>>k>>pa>>pb;
        LL m=1;
        for(int i=1;i<=n;++i) cin>>b[i];
        for(int i=1;i<=n;++i) cin>>a[i],m=max(m,a[i]);
        bs.clear();
        LL BO=f(k,pa,m,0);
        bs.clear();
        LL SA=f(k,pb,m,0);
        if(BO>SA) cout<<"Bodya";
        else if(BO<SA) cout<<"Sasha";
        else cout<<"Draw";
        cout<<endl;
    }
	return 0;
}