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
    vector<int> v(10000);
    bitset<2001>f;
	while(N--){
        int n;
        cin>>n;
        for(int i=1,e;i<=2*n;++i) cin>>e,v[i]=e;
        f.reset();
        f[0]=1;
        for(int i=1,j;i<=n*2;i=j+1){
            for(j=i;j<2*n && v[j+1]<v[i];j++);
			f|=f<<(j-i+1);
        }
        if(f[n]) Pyes();
        else Pno();
	}
	return 0;
	
}