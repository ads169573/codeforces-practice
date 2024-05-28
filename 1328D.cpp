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

int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> ret(n);
        int cnt=1,p=-1,k=1;
        cin>>v[0];
        ret[0]=cnt;
        for(int i=1;i<n;++i){
            cin>>v[i];
            if(v[i]==v[i-1]) {
                ret[i]=ret[i-1];
                p=i;
            }
            else{
                ret[i]=3-cnt;
                cnt=3-cnt;
                k=2;
            }
        }
        if((v[0]!=v[n-1])&&(ret[0]==ret[n-1])){
            if(p>0){
                for(int i=p;i<n;++i){
                    ret[i]=3-ret[i];
                }
            }
            else{
                ret[n-1]=3;
                k=3;
            }
        }
        cout<<k<<endl;
        for(auto &e:ret) cout<<e<<" ";
        cout<<endl;
	}
	return 0;
	
}