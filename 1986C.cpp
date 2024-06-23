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
        RPQ<char> pq;
        int n,m;
        cin>>n>>m;
        string s,c;
        set<int> st;
        cin>>s;
        for(int i=0,j;i<m;++i){
            cin>>j;
            st.insert(j-1);
        }
        cin>>c;
        for(auto ch:c) pq.push(ch);
        for(auto ind:st){
            s[ind]=pq.top();
            pq.pop();
        }
        cout<<s<<endl;
    }
	return 0;
	
}