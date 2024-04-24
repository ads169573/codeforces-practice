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
        LL n,m;
        cin>>n>>m;
        vector<LL> v(n+1);
        for(int i=1;i<=n;++i){
            cin>>v[i];
        }
        int l=1,r=1,nl=1,mx=0;
        LL s=m;
        for(int i=1;i<=n;++i){
            s+=v[i];
            while((nl<=i)&&(s<0)){
                s-=v[nl++];
            }
            if(mx<(i-nl+1)){
                if(s>=0){
                    l=nl;
                    r=i;
                    mx=i-nl+1;    
                }
            }
        }
        if(mx==0) cout<<-1<<endl;
        else cout<<l<<" "<<r<<endl;
    }
	return 0;
}