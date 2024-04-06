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
int main()
{	
	int N;
    vector<int> v(200010);
    for(int i=0;i<10;++i) v[i]=1;
    for(int i=10;i<200010;++i) v[i]=(v[i-9]+v[i-10])%mod;
	cin>>N; 
	while(N--){
		int n,m;
		cin>>n>>m;
        int ans=0;
        while(n){
            ans=(ans+v[n%10+m])%mod;
            n/=10;
        }
        cout<<ans<<endl;
	}
	return 0;
	
}