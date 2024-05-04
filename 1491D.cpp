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
        int a,b;
        cin>>a>>b;
        int p=0;
        if(a>b){
            Pno();
            continue;
        }
        bool t=1;
        int c=0,d=0;
        for(int i=0;i<30;++i){
            c+=(a>>i)&1;
            d+=(b>>i)&1;
            if(d>c) t=0;
        }

        if((c>=d)&&t) Pyes();
        else Pno();
    }
	return 0;
}
