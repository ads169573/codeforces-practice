#include<bits/stdc++.h>
using namespace std;
#define ll long long

int p(int a,int b,int cnt){
    if(a==0&&b==0) return 0;
    if(b>=cnt){
        b-=cnt;
        return 1+p(a,b,cnt);
    }
    else{
        int tmp = cnt-b;
        if(tmp%2){
            b=1;
            return 1+p(a-tmp/2-1,b,cnt-tmp/2-1);
        }
        else{
            return 1+p(a-tmp/2,0,cnt-tmp/2);
        }
    }

}
int main(){	
	int N;
	cin>>N;
	while(N--){
        int a,b,c;
        cin>>a>>b>>c;
        int e = a * 2 + b * 1 + c * 0;
        e++;
        if(e != (a + b + c)){
            cout << -1 << "\n";
            continue;
        }
        int l=0,cnt=0,ans=-1;
        set<vector<int>> s;
        ans=p(a,b,c);
        cout<<ans<<endl;
	}
	return 0;
	
}