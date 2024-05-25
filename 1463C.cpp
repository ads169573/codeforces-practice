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

int main()
{	
	int N;
    cin>>N;
    vector<LL> a(1e5+5);
    vector<LL> b(1e5+5);
	while(N--){
        int n;
        cin>>n;
        for(int i=1;i<=n;++i) cin>>a[i]>>b[i];
        LL p=0,q=0,ans=0;
        for(int i=1,j;i<=n;++i){
            if(p==q) q=b[i];
            if(i==n||a[i+1]-a[i]>=abs(p-q)) j=q;
            else j=p+(p<q?(a[i+1]-a[i]):(a[i]-a[i+1]));
            if((b[i]-j)*(b[i]-p)<=0) ans++;
            p=j;
        }
        cout<<ans<<endl;
    }
	return 0;
}
