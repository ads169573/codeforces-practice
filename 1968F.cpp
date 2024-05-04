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
        int n,q;
        cin>>n>>q;
        vector<int> v(n+1,0);
        map<int,vector<int>> mp;
        mp[0].push_back(0);
        for(int i=1;i<=n;++i){
            cin>>v[i];
            v[i]^=v[i-1];
            mp[v[i]].push_back(i);
        }
        for(int i=0,l,r;i<q;++i){
            cin>>l>>r;
            int il=*(lower_bound(mp[v[r]].begin(),mp[v[r]].end(),l-1));
            int ir=*prev(lower_bound(mp[v[l-1]].begin(),mp[v[l-1]].end(),r));
            if(il>ir) Pno();
            else Pyes();
        }
        cout<<endl;
    }
	return 0;
}
