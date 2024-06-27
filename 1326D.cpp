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
int fail[2000010];
string f(string s){
    string t=s;
	reverse(t.begin(),t.end());
	t=s+'$'+t;
	int j=0,n=t.size();
	for(int i=1;i<n;i++){
		while(j&&t[i]!=t[j])j=fail[j-1];
		j+=(t[i]==t[j]);
		fail[i]=j;
	}
	return s.substr(0,j);
}
int main()
{	
	int N;
    cin>>N;
	while(N--){
        string s,t,A,B;
		cin>>s;
		int i=0,j=s.size()-1;
		while(i<j&&s[i]==s[j])i++,j--;
		t=s.substr(i,j-i+1);
		A=f(t);
		reverse(t.begin(),t.end());
		B=f(t);
		if(A.size()<B.size())swap(A,B);
		cout<<s.substr(0,i)<<A<<s.substr(j+1)<<'\n';
	}
	return 0;
	
}