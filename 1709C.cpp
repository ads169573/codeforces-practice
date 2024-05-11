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
        string s;
        cin>>s;
        int cnt=0,t=0;
        for(auto c:s){
            if(c=='(') cnt++;
            else if(c==')') cnt--;
            else if(c=='?') t++;
            if((cnt+t)==1){
                cnt=1;
                t=0;
            }
        }
        if(cnt==t) Pyes();
        else Pno();
    }
	return 0;
}
