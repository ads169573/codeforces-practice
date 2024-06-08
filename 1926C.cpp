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
    vector<int> dp(2e5+1);
    vector<int> v(2e5+1,0);
    int p=10,c=0;
    for(int i=1;i<=9;++i){
        dp[i]=i;
        v[i]=dp[i]+v[i-1];
    } 
    for(int i = 10;i<=2e5+1;++i){
        if(i==p){
            c=p;
            p*=10;
        }
        dp[i]=1+dp[i-c];
        v[i]=dp[i]+v[i-1];
    }
	while(N--){
		int n;
		cin>>n;
        
        cout<<v[n]<<endl;
	}
    return 0;
}
