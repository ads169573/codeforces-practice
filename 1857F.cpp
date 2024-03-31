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
int main(){	
	int N;
	cin>>N;
	while(N--){
        LL n,x,y;
        cin>>n;
        map<LL,LL> mp;
        vector<int>v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
            mp[v[i]]++;
        }
        int m;
        cin>>m;
        for(int i=0;i<m;++i){
            cin>>x>>y;
            LL ans=(sqrt(x*x-4*y)+x)/2;
            if(ans*(x-ans)!=y)cout<<0<<" ";
            else if(ans!=(x-ans)) cout<<mp[ans]*mp[x-ans]<<" ";
            else cout<<mp[ans]*(mp[x-ans]-1)/2<<" ";
        }
        cout<<endl;
	}
	return 0;
	
}