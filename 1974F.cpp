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
        int a,b,n,m;
        cin>>a>>b>>n>>m;
        vector<int> x(n+1);
        vector<int> y(n+1);
        vector<vector<int>> z(m+1,vector<int>(4));
		for(int i=1;i<=n;i++) cin>>x[i]>>y[i];
		int x1=1,x2=a,y1=1,y2=b;
		for(int i=1;i<=m;i++){
			char c;
			int j;
			cin>>c>>j;
			if(c=='U')x1+=j;
			else if(c=='D')x2-=j;
			else if(c=='L')y1+=j;
			else if(c=='R')y2-=j;
			z[i]={x1,x2,y1,y2};
		}
		int p=0,q=0;
		for(int i=1;i<=n;i++){
			int l=1,r=m+1;
			while(l<r){
				int mid=l+r>>1;
				if(!(x[i]<=z[mid][1]&&x[i]>=z[mid][0]&&y[i]<=z[mid][3]&&y[i]>=z[mid][2])) r=mid;
				else l=mid+1;
			}
			if(l!=m+1){
				if(l%2==1) p++;
				else q++;
			}
		}
		cout<<p<<' '<<q<<endl;
	}
    return 0;
}
