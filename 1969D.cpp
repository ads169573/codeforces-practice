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
        int n,k;
        cin>>n>>k;
        vector<LL>a(n);
        vector<LL>b(n);
        for(auto &e:a) cin>>e;
        for(auto &e:b) cin>>e;
        RPQ<vector<LL>> pq; 
        RPQ<vector<LL>> rpq; 
        LL ans=0LL,cur=0LL,sum=0LL;
        for(int i=0;i<n;++i){
            if(b[i]>a[i]){
                pq.push({a[i],b[i]});
            }
        }

        while(!pq.empty()){
            rpq.push({pq.top()[1]});
            cur+=pq.top()[1]-pq.top()[0];
            sum+=pq.top()[1];
            pq.pop();
            if(rpq.size()>k){
                sum-=rpq.top()[0];
                rpq.pop();
            }
            if(rpq.size()==k)
                ans=max(ans,cur-sum);
        }

        cout<<ans<<endl;
    }
	return 0;
}
