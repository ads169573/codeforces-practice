#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define RPQ(T) priority_queue<T,vector<T>,greater<T>>
#define PQ(T) priority_queue<T>
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        LL n,m;
        cin>>n>>m;
        vector<int> v(n);
        vector<int> vv(n);
        vector<int> vvv(n);
        for(auto &e:v) cin>>e;
        string s;
        cin>>s;
        int p=1,l=0,r=n-1;
        for(int i=0;i<n;++i){
            if(s[i]=='R') vv[i]=r--;
            else vv[i]=l++;
        }
        for(int i=n-1;i>=0;--i){
            p=(p*v[vv[i]])%m;
            vvv[i]=p;
        }
        for(auto e:vvv) cout<<e<<" ";
        cout<<"\n";
	}
    return 0;
}