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
int main()
{	
	int N;
	cin>>N;
	while(N--){
		LL n,k;
		cin>>n>>k;
        bool t=1;
        vector<LL> s(k);
        for(auto &e:s) cin>>e;
        LL p;
        for(int i=1;i<k;i++){
            if(i==1){
                p=s[i]-s[i-1];
                if((s[i-1]-(n-k)*p)>p) t=0;
            }
            else{
                if((s[i]-s[i-1])<p) t=0;
                p=s[i]-s[i-1];
            }
        }
        if(t) Pyes();
        else Pno();
	}
	return 0;
	
}