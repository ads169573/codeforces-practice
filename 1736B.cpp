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
		int n;
		cin>>n;
		vector<int> v(n);
        for(auto &e:v) cin>>e;
        bool t =1;
        for(int i=2;i<n;++i){
            if(v[i-1]%gcd(v[i-2],v[i])){
                t=0;
                break;
            }
        }
        if(t) Pyes();
        else Pno();
	}
	return 0;
	
}