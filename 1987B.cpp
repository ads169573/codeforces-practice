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
int main()
{	
	int N;
	cin>>N;
	while(N--){
        LL n,ans=0;
        cin>>n;
        vector<LL> v(n);
        for(auto&e:v) cin>>e;
        RPQ<LL> pq;
        for(int i=1;i<n;++i){
            if(v[i]<v[i-1]){
                pq.push(v[i-1]-v[i]);
                v[i]=v[i-1];
            }
        }
        LL p=0;
        while(!pq.empty()){
            auto e=pq.top();
            pq.pop();
            if(e>p){
                ans+=(e-p)*(pq.size()+2);
                p=e;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
	
}