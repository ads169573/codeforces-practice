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
        int n,k;
        cin>>n>>k;
        int a=0,b=0;
        while(1){
            if(a+(n>>b+1)+(n>>b&1)>=k)
                break;
            a+=(n>>b+1)+(n>>b&1);
            b++;
        }
        k-=a;
        cout<<((k*2-1)<<b)<<endl;
	}
	return 0;
	
}