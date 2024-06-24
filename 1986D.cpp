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
        string s;
        cin>>n>>s;
        if(n==2){
            if(s[0]=='0') cout<<s[1]<<endl;
            else cout<<s<<endl;
            continue;
        }
        int ans=-1;
        bool z=0;
        for(int i=0;i<n-1;++i){
            vector<LL> v;
            for(int j=0;j<n;++j){
                if(j==i) continue;
                if(j==i+1){
                    v.push_back((s[i]-'0')*10+(s[j]-'0'));
                }
                else{
                    v.push_back((s[j]-'0'));
                }
            }
            int tmp=0;
            for(auto e:v){
                if(e==0){
                    z=1;
                    break;
                }
                else if(e==1) continue;
                tmp+=e;
            }
            if(z){
                ans=0;
                break;
            }
            if(tmp==0) ans=1;
            else {
                if(ans==-1) ans=tmp;
                else ans=min(ans,tmp);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
	
}