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
LL mod = 998244353;
int main(){
    int N;
    cin>>N;
    vector<LL>a(110,0);
    vector<LL>b(110,0);
    vector<vector<LL>>c(110,vector<LL>(110,0));
    c[0][0]=1;
    for (int i = 1; i <= 100; i++) {
        c[i][0] = 1;
        for (int j = 1; j <= 100; j++) {
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
        }
    }
    for (int i = 2; i <= 60; i++) {
        a[i] = (c[i - 1][i / 2 - 1] + b[i - 2]) % mod;
        b[i] = (c[i][i / 2] - a[i] - 1 + mod + mod) % mod;
    }
    
	while(N--){
        int n;
        cin>>n;
        cout<<a[n]<<" "<<b[n]<<" 1\n";
	}
    return 0;
}