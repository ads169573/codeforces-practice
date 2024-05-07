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
    LL w = 1<<19,c=(1e12+1);
    vector<LL> v(w);
	while(N--){
        LL m=w*c;
        string s;
        cin>>s;
        LL n=s.size();
        for(LL i=1;i<=n;++i){
            v[i]=v[i-1]+s[i-1]-'0';
        }
        for(LL i=0;i<=n;++i){
            LL tmp = (v[i]+n-i-v[n]+v[i])*c-((s[i-1]=='1'&&s[i]=='0')|(s[i+1]=='0'&&s[i]=='1'));
            m=min(m,tmp);
        }
        cout<<m<<endl;
	}
    return 0;
}