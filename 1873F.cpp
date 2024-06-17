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
        int n,k;
        cin>>n>>k;
        vector<int> v(n+1);
        vector<int> h(n+1);
        vector<int> s(n+1);
		for(int i=1;i<=n;i++){
			cin>>v[i];
			s[i]=s[i-1]+v[i];
		}
		for(int i=1;i<=n;i++)cin>>h[i];
		int m=0,l,r;
		l=r=1;
		while(r<=n){
			if(h[r-1]%h[r])l=r;
			while(s[r]-s[l-1]>k)l++;
			m=max(m,r-l+1);
			r++;
		}
		cout<<m<<endl;

	}
    return 0;
}