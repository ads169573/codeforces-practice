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
        string s;
        cin>>s;
        int n=s.size();
        vector<vector<LL>> vvv(n+1,vector<LL>(5,0));
        vector<LL> table{1,10,100,1000,10000}; 
        int ans=-2e9,dif=0;
        for(int i=1;i<=n;++i){
            int p=s[i-1]-'A';
            for(int j=0;j<5;++j){
                vvv[i][j]=vvv[i-1][max(j,p)]+table[p]*(p<j?-1:1);
            }
        }
        int p=0;
        for(int i=n-1;i>=0;--i){
            for(int j=0;j<5;++j){
                int k=dif+table[j]*(j<p?-1:1)+vvv[i][max(j,p)];
                ans=max(ans,k);
            }
            int pp=s[i]-'A';
            dif+=table[pp]*(pp<p?-1:1);
            p=max(p,pp);
        }
        cout<<ans<<endl;
    }
	return 0;
}
