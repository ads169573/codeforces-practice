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
        LL n,m,k;
        cin>>n>>m>>k;
        LL ans=0;
        map<LL,RPQ<LL>> mp;
        vector<pair<LL,LL>> f;
        set<LL> s;
        for(int i = 0;i<k;++i){
            LL a,b;
            cin>>a>>b;
            f.emplace_back(a,b);
            mp[b].push(n-a);
            s.insert(b);
        }
        LL p=n,q=1;
        
        map<pair<int,int>,vector<LL>> mmp;
        for(auto b:s){
            if(mp[b].top()<p){
                LL tp=p,tq=q;
                ans+=(b-q)*p;
                p=mp[b].top();
                q=b;
                mmp[{n-p,q}]={ans,tp,tq};
                
            }
        }
        ans+=(m-q+1)*p;
        cout<<ans<<endl;
        
        for(int i=0;i<k;++i){
            LL tmp=0;
            if(mmp.count(f[i])){
                LL a=f[i].first,b=f[i].second;
                LL re = mp[b].top();
                mp[b].pop();
                bool ch=0;
                tmp=mmp[f[i]][0];
                p=mmp[f[i]][1];
                q=b;
                for(auto it = s.find(b);it != s.end();++it){
                    if((mp[*it].size()>0)&&(mp[*it].top()<p)){
                        tmp+=(*it-q)*p;
                        p=mp[*it].top();
                        q=*it;
                        if(mmp.count({n-p,q})){
                            tmp-=mmp[{n-p,q}][0];
                            ch=1;
                            break;
                        }
                    }
                }
                if(!ch){
                    tmp+=(m-q+1)*p;
                    tmp-=ans;
                }
                mp[b].push(re);
            }
            cout<<tmp<<" ";
        }
        cout<<endl;
	}
    return 0;
}
