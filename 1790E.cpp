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
        int x;
        cin>>x;
        if(x%2||((x+x/2)^(x/2))!=x) cout<<-1<<endl;
        else cout<<x/2<<" "<<(x+x/2)<<endl;
	}
    return 0;
}