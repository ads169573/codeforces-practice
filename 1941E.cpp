#include<bits/stdc++.h>
using namespace std;
#define LL long long
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        int n,m,k,d;
        cin>>n>>m>>k>>d;
        int cnt=0;
        LL ans = 1e18,sum=0ll;
        queue<LL> q;
        d+=1;
        for(int i=0;i<n;++i){
            LL tmp = 0;
            vector<LL> v(m,0);
            for(int j=0;j<m;++j){
                cin>>v[j];
            }
            if(d>=m){
                tmp=2;
            }
            else{
                priority_queue<LL,vector<LL>,greater<LL>> pq;
                map<LL,int> mp;
                vector<LL> v2(m);
                v2[m-1]=1;
                for(int i=m-2;i>=m-1-d;--i){
                    mp[v[i]+2]++;
                    pq.push(v[i]+2);
                    v2[i]=v[i]+2;
                }
                for(int i=m-d-2;i>=0;--i){
                    mp[v2[d+1+i]]--;
                    while(mp[pq.top()]==0){
                        pq.pop();
                    }
                    v2[i]=v[i]+pq.top()+1;
                    mp[v[i]+pq.top()+1]++;
                    
                    pq.push(v2[i]);
                }
                tmp=v2[0];
            }
            cnt++;
            q.push(tmp);
            sum+=tmp;
            if(cnt>k){
                sum-=q.front();
                q.pop();
            }
            if(cnt>=k)
                ans=min(ans,sum);
        }
        
        cout<<ans<<endl;
	}
    return 0;
}