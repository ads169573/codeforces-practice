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
        int n;
        cin>>n;
        map<int,vector<int>> mp;
        vector<int> v(n+1,1);
        queue<int> q;
        vector<int> deg(n,0);
        int ans=0,cnt=0;
        for(int i=1,m;i<=n;++i){
            cin>>m;
            if(m==0){
               q.push(i); 
            } 
            deg[i]=m;
            for(int j=0,k;j<m;++j){
                cin>>k;
                mp[k].emplace_back(i);
            }   
        }
        while(!q.empty()){
            int a=q.front();
            q.pop();
            cnt++;
            ans=max(ans,v[a]);
            for(auto &b:mp[a]){
                v[b]=max(v[b],v[a]+(a>b));
                if(--deg[b]==0){
                    q.push(b);
                }
            }
        }
        cout<<(cnt==n?ans:-1)<<endl;
    }
	return 0;
}
