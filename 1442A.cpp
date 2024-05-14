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

int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &e:v) cin>>e;
        if(n==1){
            Pyes();
            continue;
        }
        int p=v[0],q=v[0];
        for(int i=1;i<n;++i){
            if(q>v[i]){
                p-=q-v[i];
            }
            q=v[i];
        }
        if(p>=0) Pyes();
        else Pno();
	}
	return 0;
	
}