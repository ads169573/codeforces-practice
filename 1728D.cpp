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
        bool t=true;
        int i=0,j=s.size()-1;
        while(s[i]==s[j]){
            i++;
            j--;
        }
        while(s[i]==s[i+1]){
            i+=2;
        }
        if(i<=j) cout<<"Alice\n";
        else cout<<"Draw\n";
    }
	return 0;
}
