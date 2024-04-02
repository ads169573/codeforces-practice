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
int main(){	
	int N;
	cin>>N;
	while(N--){
        map<int,LL> mp;
        map<int,vector<int>> mmp;
        int n;
        int cnt=0;
        cin>>n;
        for(int i=0,a;i<n;++i){
            cin>>a;
            mp[a]++;
            mmp[a].push_back(i);
        }
        vector<LL> ret(n);
        int p=0;
        LL cl=0ll,cr=1ll*n,sl=0ll,sr=0ll;
        for(auto &[e,ee]:mmp){
            if(cl==0){
                for(auto &[i,j]:mp){
                    sr+=(i-e+1)*j;
                }
                sl+=mp[e];
                sr-=mp[e];
            }
            else{
                LL d=e-p;
                sl+=cl*d;
                sr-=cr*d;
                sr-=mp[e];
                sl+=mp[e];
 
            }
            cl+=mp[e];
            cr-=mp[e];
            p=e;
            for(auto &i:ee) ret[i]=sl+sr;
        }
        for(auto &e:ret) cout<<e<<" ";
        cout<<endl;
	}
    return 0;
}