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
        int n,m,lst;
        cin>>n>>m>>lst;
        int ans=1;
		for(int i=1,a;i<n;i++){
			cin>>a;
			if(lst%a)ans=0;
			if(ans==0)continue;
			int nw=lst/a;
			vector<int>pr;
			for(int j=2;j<=sqrt(nw);j++)
				if(nw%j==0){
					pr.push_back(j);
					while(nw%j==0)nw/=j;
				}
			if(nw!=1)pr.push_back(nw);
			int t=0;
			for(int j=0;j<(1<<pr.size());j++){
				int mul=1,tp=1;
				for(int k=0;k<pr.size();k++)
					if(j&(1<<k))
						mul*=pr[k],tp=-tp;
				t=((t+m/mul/a*tp)%mod2+mod2)%mod2;
			}
			ans=1ll*ans*t%mod2;
			lst=a;
		}
        cout<<ans<<endl;
    }
	return 0;
}
