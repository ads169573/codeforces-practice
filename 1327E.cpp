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
	int N=1;
    //cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<LL>v(1000005);
        v[0]=1;
        for(int i=1;i<=n;++i) v[i]=v[i-1]*(10)%mod2;
        for(--n;n>0;--n){
            cout<<v[n-1]*(81*(n-1)+180)%mod2<<" ";
        } 
        cout<<10<<endl;
	}
	return 0;
	
}