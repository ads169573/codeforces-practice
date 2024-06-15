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
int main(){	
	int N=1;
	//cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        int ans=0;
        for(int i=0;i<n;++i){
            if(i>=1&&v[i-1]) --v[i-1];
		    else if(v[i]==0&&(i+1<n)&&v[i+1]) --v[i+1];
		    else ++ans;
        }
        
        cout<<ans<<endl;
        
	}
	return 0;
	
}