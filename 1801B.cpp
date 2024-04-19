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
        multiset<int> s;
        vector<pair<int,int>> v(n);
        for(auto &e:v){
            cin>>e.F>>e.S;
            s.insert(e.S);
        }
        int ans=1e9,p=-1e9;
        sort(v.begin(),v.end(),greater<>());
        for(auto [a,b]:v){
            s.erase(s.find(b));
            if(p>=a){
                ans=min(ans,p-a);
            }
            else{
                ans=min(ans,a-p);
                auto c=s.upper_bound(a);
                if(c!=s.end()) ans=min(ans,*c-a);
                if(c!=s.begin()){
                    c--;
                    if(*c>p){
                        ans=min(ans,a-*c);
                    }
                }
            }
            p=max(p,b);
        }
        cout<<ans;
        cout<<'\n';
    }
	return 0;
}
