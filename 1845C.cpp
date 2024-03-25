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
        string s;
        cin>>s;
        int m;
        cin>>m;
        string l,r;
        cin>>l>>r;
        int t=-1;
        bool chk = 1;
        for(int i=0;i<m;++i){
            int tt=t+1;
            for(char j=l[i];j<=r[i];++j){
                int ttt=s.find(j,tt);
                if(ttt==-1){
                    chk = 0;
                    break;
                }
                t=max(t,ttt);
            }
            if(!chk) break;
        }
        if(chk) Pno();
        else Pyes();
	}
    return 0;
}