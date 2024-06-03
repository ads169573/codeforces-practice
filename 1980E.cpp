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
        int n,m;
        cin>>n>>m;
        vector<int>r(n*m+1);
        vector<int>c(n*m+1);
        vector<vector<int>> a(n,vector<int>(m));
        vector<vector<int>> b(n,vector<int>(m));
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>b[i][j];
                r[b[i][j]]=i;
                c[b[i][j]]=j;
            }
        }
        bool t =1;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(r[a[i][j]]!=r[a[i][0]]) {
                    t=0;
                    break;
                }
            }
            if(!t) break;
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(c[a[j][i]]!=c[a[0][i]]) {
                    t=0;
                    break;
                }
            }
            if(!t) break;
        }
        if(t) cout<<"YES\n";
        else cout<<"NO\n";

	}
    return 0;
}
