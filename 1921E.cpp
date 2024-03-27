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
vector<int>v(1e6);
int main(){
    int N;
    cin>>N;
	while(N--){
        int h,w,a,b,c,d;
        cin>>h>>w>>a>>b>>c>>d;
        if(a>=c) cout<<"DRAW\n";
        else if((c-a)%2==1){
            if((abs(b-d)<=1)||((d>b?w-b:b-1)<=(c-a+1)/2)){
                cout<<"ALICE\n";
            }
            else{
                cout<<"DRAW\n";
            }
        }
        else{
            if((b==d)||((d>b?d-1:w-d)<=(c-a)/2)){
                cout<<"BOB\n";
            }
            else{
                cout<<"DRAW\n";
            }
        }
	}
    return 0;
}

