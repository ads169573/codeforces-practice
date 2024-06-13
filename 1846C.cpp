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
		LL n,m,h;
        cin>>n>>m>>h;
        int ans=1;
        LL ps=0,pp=0;
        for(int i=1;i<=n;++i){
            RPQ<LL>pq;
            for(int j=0,tmp;j<m;++j){
                cin>>tmp;
                pq.push(tmp);
            }
            LL pl=0,t=0,s=0;
            while(!pq.empty()){
                t+=pq.top();
                pq.pop();
                if(h<t){
                    break;
                }
                pl+=t;
                s++;
            }
            if(i==1){
                ps=s;
                pp=pl;
            }
            else{
                if(s>ps){
                    ans++;
                }
                else if(s==ps){
                    if(pp>pl){
                        ans++;
                    }
                }
            }
        }
        
        cout<<ans<<endl;
	}
	return 0;
	
}