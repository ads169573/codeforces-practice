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
    cin>>N;
	while(N--){
        LL n;
        cin>>n;
        LL l=1,r=n;
        for(LL i=2;l<=n;++i){
            r+=n/l;
            l=l*i/gcd(l,i);
        }
        cout<<r%mod<<endl;
	}
	return 0;
	
}