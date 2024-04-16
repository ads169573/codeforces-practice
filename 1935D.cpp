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
        LL n,c;
        cin>>n>>c;
        vector<int> v(n);
        LL ans =(c+2)*(c+1)/2,odd=0,even=0,sum=0ll;;
        for(int i=0,j;i<n;++i){
            cin>>j;
            if(j%2) odd++;
            else even++;
            sum+=((c-j)+(j/2)+1);
        }
        cout<<ans+((odd-1)*odd/2)+(even-1)*even/2-sum<<endl;
    }
	return 0;
}