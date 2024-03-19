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
        int n;
        cin>>n;
        vector<PINT> v;
        int l=0,r=0;
        for(int i=0;i<n;++i){
            int j,k;
            cin>>j>>k;
            v.push_back({j,k});
            if(i==0){
                l=j;
                r=k;
            }
            l=min(l,j);
            r=max(r,k);
        }
        
        while(l<r){
            int m=(l+r)/2;
            bool t=1;
            int tl=0,tr=0;
            for(int i=0;i<n;++i){
                tl=max(v[i].F,tl-m);
                tr=min(v[i].S,tr+m);
                if(tl>tr){
                    t=0;
                    break;
                }
            }
            if(t) r=m;
            else l=m+1;
        }
        cout<<l<<endl;
	}
    return 0;
}