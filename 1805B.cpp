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
		string s;
        cin>>s;
        char m='z';
        for(auto c:s) m=min(m,c);
        int p=0;
        for(int i=0;i<n;++i){
            if(s[i]==m){
                p=i;
            }
        } 
        cout<<s[p]+s.substr(0,p)+s.substr(p+1)<<endl;
	}
	return 0;
	
}