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
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        string s;
        cin>>s;
        vector<int> v;
        int ans=0,c=0,a=0,b=0,mn=1e9;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B') b++;
            else{
                c=0;
                while(i<s.size() && s[i]=='A') c++,i++;
                i--;
                a++;
                v.push_back(c);
            }
        }
        if(b<a){
            for(int i=0;i<v.size();i++) mn=min(v[i],mn);
        }
        for(int i=0;i<v.size();i++) ans+=v[i];
        cout << ans-(mn!=1e9)*mn <<endl;
	}
    return 0;
}