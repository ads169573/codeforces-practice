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
vector<vector<LL>> v;
vector<vector<bool>> u;
LL f(vector<LL>&a,vector<LL>&b,int i,int j){
    if(i==j) return 0;
    if(i>j) return 0;
    if(u[i][j]) return v[i][j];
    u[i][j]=1;
    return v[i][j] = (a[i]*b[j]+a[j]*b[i])-(a[i]*b[i]+a[j]*b[j])+f(a,b,i+1,j-1);
}
int main()
{	
	int N=1;
	//cin>>N; 
    v.resize(5000,vector<LL>(5000));
    u.resize(5000,vector<bool>(5000));
	while(N--){
        int n;
        cin>>n;
        vector<LL> a(n);
        for(auto &e:a) cin>>e;
        vector<LL> b(n);
        for(auto &e:b) cin>>e;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                v[i][j]=0;
                u[i][j]=0;
            }
        }
        LL ans=0;
        for(int i=0;i<n;++i){
            v[i][i]=0;
            for(int j=i+1;j<n;++j){
                ans=max(ans,f(a,b,i,j));
            }
        }
        LL sum=0LL;
        for(int i=0;i<n;++i) sum+=(a[i]*b[i]);
        cout<<sum+ans<<endl;
	}
	return 0;
	
}