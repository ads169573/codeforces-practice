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
bool f(string &s,int m){
    int n=s.size();
    vector<int> v(n,0);
    queue<int> q;
    int a=0;
    for(int i=0;i<n;++i){
        if((!q.empty())&&(i==q.front())){
            a--;
            q.pop();
        } 
        if(s[i]=='0'+(a%2)){
            q.push(i+m);
            a++;
        }
        v[i]=a;
    }
    for(int i=0;i<n;++i){
        if(s[i]=='0'){
            if((v[i]%2)==0) return 0;
        } 
        else {
            if(v[i]%2) return 0;
        }
    }
    
    return q.empty()||((q.size()==1)&&(q.front()==n));
}
int main()
{	
	int N;
    
	cin>>N; 
	while(N--){
        int n;
        cin>>n;
		string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;++i) {
            if(s[i]=='0') cnt++;
        }
        if(cnt==0){
            cout<<n<<endl;
            continue;
        }
        else if(cnt==n){
            cout<<n<<endl;
            continue;
        }
        int ans=0;
        for(int i=n-1;i>=1;--i){
            if(f(s,i)){
                ans=i;
                break;
            }
        }
        
        cout<<ans<<endl;

	}
	return 0;
	
}