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
        int x,n;
        cin>>n>>x;
        int ans=0;
        set<int> s;
        int p=n-x;
        if((p%2)==0){
            p/=2;
            for(int i=1;i<=sqrt(p);++i){
                if(p%i) continue;
                if((i+1)>=x) s.insert(i+1);
                if((p/i+1)>=x) s.insert(p/i+1);
            }
        }
        p=n+x-2;
        if((p%2)==0){
            p/=2;
            for(int i=1;i<=sqrt(p);++i){
                if(p%i) continue;
                if((i+1)>=x) s.insert(i+1);
                if((p/i+1)>=x) s.insert(p/i+1);
            }
        }
        cout<<s.size()<<endl;
	}
    return 0;
}
