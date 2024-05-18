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
    //cin>>N;
	while(N--){
        LL a,b,c,d;
        cin>>a>>b>>c>>d;
        LL ans=0;
        for(LL i=max(c+1,a+b);i<=b+c;++i){
            ans+=(min(d+1,i)-c)*(min(i-b,b)-max(i-c,a)+1);
        }
        cout<<ans<<endl;
	}
	return 0;
	
}