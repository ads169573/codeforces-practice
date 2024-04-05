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
    vector<vector<LL>> v(2001,vector<LL>(2001));
    LL k=0;
    for(int i =1;i<=2000;++i){
        for(int j=1;j<=i;++j){
            k++;
            v[i][j] = v[i-1][j-1]+v[i-1][j] - (i>1?v[i-2][j-1]:0) + k*k;
        }
    }
	cin>>N;
	while(N--){
		int n;
		cin>>n;
		int i=1;
        while(n>i){
            n-=i;
            i++;
        }
        cout<<v[i][n]<<endl;
	}
	return 0;
	
}