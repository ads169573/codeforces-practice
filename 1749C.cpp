#include<bits/stdc++.h>
using namespace std;
#define LL long long
/*std = c++2a*/
bool f(vector<int>&v,int m){
    for(int i=0;i<m;++i){
        if(((i+m-1)>=v.size())||((v[i+m-1])>(i+1))){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &e:v) cin>>e;
        sort(v.begin(),v.end());
        int l=0,r=n;
        while(l<r)
        {
            int m=l+(r-l+1)/2;
            
            if(f(v,m)){
                l=m;
            }
            else{
                r=m-1;
            }
        }
        
        cout<<l<<endl;
	}
    return 0;
}