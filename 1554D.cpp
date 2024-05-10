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
int mod2=998244353;

int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        string s;
        if(n==1) s="a";
        else{
            for(int i=0;i<n/2;++i) s+='a';
            if(n%2) s+="bc";
            else s+="b";
            for(int i=0;i<n/2-1;++i) s+='a';
        }
        cout<<s<<endl;
    }
	return 0;
}
