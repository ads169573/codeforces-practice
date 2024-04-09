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
        int a,b,c,d;
		cin>>a>>b>>c>>d;
		int cnt = a/2 + b/2 + c/2 + d/2;
		int ans = cnt;
		int res = 0;
		a %= 2;
		b %= 2;
		c %= 2;
		if (a && b && c)
			ans += 1;
		cout << ans << "\n";
	}
	return 0;
	
}