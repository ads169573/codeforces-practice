#include<bits/stdc++.h>
using namespace std;
#define LL long long
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        int ans= 0,p1=1e6,p2=1e6;
        for(int i=0,j;i<n;++i){
            cin>>j;
            if(p1>=j) p1=j;
            else if(p2>=j) p2=j;
            else {
                p1=p2;
                p2=j;
                ans++;
            }
        }
        
        cout<<ans<<endl;
	}
    return 0;
}