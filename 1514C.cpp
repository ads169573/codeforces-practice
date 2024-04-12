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
	int N=1;
	while(N--){
        int n;
        cin>>n;
        vector<int> ret;
        LL ans=1ll;
        for(int i=1;i<=n-1;++i){
            if(gcd(i,n)==1){
               ret.push_back(i); 
               ans=(ans*i)%n;
            } 
        }
        if(ans%n!=1) ret.pop_back();
        cout<<ret.size()<<endl;
        for(auto &e:ret) cout<<e<<" ";
        cout<<endl;
	}
	return 0;
	
}