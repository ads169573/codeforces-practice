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
vector<int>v(1e6);
int main(){
    int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n;i;--i){
            v[i]=s[n-i]-'0'+v[i+1];
        }
        int p;
        for(int i=1;v[i];++i){
            v[i+1]+=v[i]/10;
            v[i]%=10;
            p=i;
        }
        for(int i=p;i;--i) cout<<v[i],v[i]=0;
        cout<<'\n';
	}
    return 0;
}

