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
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        vector<int> a;
        vector<int> b;
        for(auto &e:v) cin>>e;
        for(int i=0,j;i<n;++i){
            cin>>j;
            if(j==1){
                a.emplace_back(v[i]);
            }
            else{
                b.emplace_back(v[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int p=b.size()-1,ans=1e9,cnt=a.size();
        long long s=0ll;
        for(auto &e:a){
            s+=e;
        } 
        for(int i=0;i<a.size();++i){
            while((p>=0)&&(s<m)){
                s+=b[p--];
                cnt+=2;
            }
            if(s>=m) ans=min(ans,cnt);
            cnt--;
            s-=a[i];
        }
        while((p>=0)&&(s<m)){
            s+=b[p--];
            cnt+=2;
        }
        if(s>=m) ans=min(ans,cnt);
        if(ans>(n*3)) ans=-1;
        cout<<ans<<endl;
    }
	return 0;
}
