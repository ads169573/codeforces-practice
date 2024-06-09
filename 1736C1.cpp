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
		vector<LL> v(n+1);
        LL sum=0;
        for(int i=1;i<=n;++i){
            cin>>v[i];
            if(v[i]>v[i-1]) v[i]=v[i-1]+1;
            sum+=v[i];
        }
        cout<<sum<<endl;
	}
	return 0;
	
}