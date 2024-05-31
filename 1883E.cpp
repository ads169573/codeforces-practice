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
    LL t, n, x, a, b, p;
	while(N--){
        cin>>n>>a;
        x=0;
        p=0;
        for(int i=0; i<n-1;i++) {
            cin>>b;
            if (a > b) p += 64 - __builtin_clzll((a - 1) / b); 
            if (a < b) p = max(p + __builtin_clzll(b / a) - 63, 0ll);
            a = b;
            x += p;
        }
        cout<<x<<endl;
	}
    return 0;
}