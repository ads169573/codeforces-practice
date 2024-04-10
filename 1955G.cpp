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
vector<vector<int>> dp;
vector<vector<int>> v;

int n,m;
int main()
{	
	int N;
    dp.resize(200,vector<int>(200));
    v.resize(200,vector<int>(200));
	cin>>N; 
	while(N--){
        cin>>n>>m;
        vector<vector<unordered_set<int>>> u(n,vector<unordered_set<int>>(m));
		for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                //dp[i][j]=0;
                cin>>v[i][j];
            }
        }
        priority_queue<vector<int>> pq;
        pq.push({v[0][0],0,0});
        int ans=1;
        while(!pq.empty()){
            auto e=pq.top();
            pq.pop();   
            int p=e[0],i=e[1],j=e[2];
            if((i==n-1)&&(j==m-1)){
                ans=p;
                break;
            } 
            if(i+1<n){
                int tmp=gcd(v[i+1][j],p);
                if(u[i+1][j].find(tmp)==u[i+1][j].end()){
                    int t=1;
                    if(u[i+1][j].size()>0){
                        for(auto &k:u[i+1][j]){
                            if((k%tmp)==0){
                                t=0;
                            }
                        }
                    }
                    u[i+1][j].insert(tmp);
                    if(t)
                        pq.push({tmp,i+1,j});
                }
            }
            if(j+1<m){
                int tmp=gcd(v[i][j+1],p);
                if(u[i][j+1].find(tmp)==u[i][j+1].end()){
                    int t=1;
                    if(u[i][j+1].size()>0){
                        for(auto &k:u[i][j+1]){
                            if((k%tmp)==0){
                                t=0;
                            }
                        }
                    }
                    u[i][j+1].insert(tmp);
                    if(t)
                        pq.push({tmp,i,j+1});
                }
            }
        }
        cout<<ans<<endl;

	}
	return 0;
	
}