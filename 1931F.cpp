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
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
		int n,m;
		cin>>n>>m;
        vector<int> in(n+1);
        map<int,vector<int>> g;
        vector<int> v(n+1);
		while(m--){
			for(int i=1;i<=n;i++){
			    cin>>v[i];
			    if(i>=3)g[v[i-1]].push_back(v[i]),in[v[i]]++;				
			}
		}
		queue<int> q;
		for(int i=1;i<=n;i++){
			if(in[i]==0)q.push(i);
		}
		int cnt=0;
		while(q.size()){
			int u=q.front();
			q.pop();
			cnt++;
			for(int v:g[u]){
				in[v]--;
				if(in[v]==0)q.push(v);
			}
		}
		if(cnt==n) cout<<"YES\n";
        else cout<<"NO\n";
	}
    return 0;
}
