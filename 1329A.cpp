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
	int N=1;
    //cin>>N;
	while(N--){
        int n,m;
        cin>>n>>m;
        int p=0;
        LL s=0;
        vector<int> v(n+1);
        for(int i=1;i<=m;++i){
            cin>>v[i];
            p|=n+1<i+v[i];
            s+=v[i];
        }
        if(p||s<n){
            cout<<-1;
        }
        else{
            for(int i=1;i<=m;++i){
                cout<<(int)max(i|0LL,n+1-s)<<" ";
                s-=v[i];
            }
        }
        cout<<endl;
    }
	return 0;
}
