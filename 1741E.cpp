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
	while(N){
		int n;
		cin>>n;
		map<int,bool> mp;
        mp[0]=1;
		for(int i=1;i<=n;++i){
            int a;
            cin>>a;
            mp[i+a]|=mp[i-1];
            mp[i]|=mp[i-a-1];
        }
		
		if(mp[n])
			Pyes();
		else
			Pno();
		N--;
	}
	return 0;
	
}