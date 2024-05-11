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
	while(N--){
        int n,m;
        cin>>n>>m;
        int ans=0;
        for(int i=30;i>=0;--i){
            if(((ans^n)|(1<<i)-1)<=m) ans+=(1<<i);
        }
        cout<<ans<<endl;
    }
	return 0;
}
