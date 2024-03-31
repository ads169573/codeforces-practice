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
bool p(string &s,int m){
    int cnt=0;
    for(int i=0;i<s.size();++i){
        if(s[i]!=s[i%m]){
            cnt++;
        }
        if(cnt>1) break;
    }
    if(cnt<2) return 1;
    cnt=0;
    for(int i=0;i<s.size();++i){
        if(s[i]!=s[(i%m)+m]){
            cnt++;
        }
        if(cnt>1) break;
    }
    return cnt<2;
}
int main(){	
	int N;
	cin>>N;
	while(N--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int pic=n;
        for(int i=1;i<n;++i){
            if((n%i)==0){
                if(p(s,i)) {
                    pic = i;
                    break;
                }
            }
        }
        cout<<pic<<endl;
	}
	return 0;
	
}