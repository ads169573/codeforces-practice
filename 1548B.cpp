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
        LL n;
        cin>>n;
        vector<LL> v(n);
        LL ans=1,cnt=0,l=-1,m=0;
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        for(LL i=1;i<n;++i){
            m=gcd(m,abs(v[i]-v[i-1]));
            if(m>1){
                ans=max(ans,i-l);
            }
            else{
                m=0;
                l=i;
                LL p=0;
                while(m!=1){
                    p=m;
                    m=gcd(m,abs(v[l]-v[l-1]));
                    l--;
                }
                m=p;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
