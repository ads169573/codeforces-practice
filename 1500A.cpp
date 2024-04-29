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
	int N=1;
    //cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &e:v) cin>>e;
        vector<int> mp(1e7,0);
        vector<int> mmp(1e7,0);
        for(int i=1;i<=n;++i){
            for(int j=i+1;j<=n;++j){
                int a=v[i-1]+v[j-1];
                if(mp[a]&&(mp[a]!=i)&&(mmp[a]!=j)&&(mmp[a]!=i)){
                    Pyes();
                    cout<<i<<" "<<j<<" "<<mp[a]<<" "<<mmp[a]<<endl;
                    return 0;
                }
                else{
                    mp[a]=i;
                    mmp[a]=j;
                }
            }
        }
        Pno();
    }
	return 0;
}
