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
	int N;
	cin>>N;
	while(N--){
        int n,q;
        cin>>n>>q;
        vector<int> v(n);
        for(auto &e:v) cin>>e;
        string s(n,'0');
        int a=0;
        for(int i=n-1;i>=0;--i){
            if(v[i]<=a) s[i]='1';
            else if(a<q) {
                a++;
                s[i]='1';
            }
        }
        cout<<s<<endl;
	}
    return 0;
}