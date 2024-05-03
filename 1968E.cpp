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
int mod=1e9+7;
int mod2=998244353;
int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        cout<<"1 1\n2 1\n";
        for(int i=3;i<=n;++i){
            cout<<i<<" "<<i<<endl;
        }
        
    }
	return 0;
}
