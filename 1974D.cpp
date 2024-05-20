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
        string s;
        cin>>s;
        string ret(n,'H');
        unordered_map<int,vector<int>> mp;
        unordered_map<char,int> d;
        d['N'] = 0;
        d['S'] = 1;
        d['E'] = 2;
        d['W'] = 3;
        for(int i=0;i<n;++i){
            mp[d[s[i]]].push_back(i);
        }
        if(((mp[0].size()-mp[1].size())%2!=0)){
            Pno();
            continue;
        }
        if((mp[0].size()==1)&&(mp[1].size()==1)&&(mp[2].size()==0)&&(mp[3].size()==0)){
            Pno();
            continue;
        }
        if((mp[2].size()==1)&&(mp[3].size()==1)&&(mp[1].size()==0)&&(mp[0].size()==0)){
            Pno();
            continue;
        }
        if((mp[2].size()-mp[3].size())%2!=0){
            Pno();
            continue;
        }
        for(int i=0;i<mp[0].size();++i){
            if(i%2) ret[mp[0][i]]='R';
            else ret[mp[0][i]]='H';
        }
        for(int i=0;i<mp[1].size();++i){
            if(i%2) ret[mp[1][i]]='R';
            else ret[mp[1][i]]='H';
        }
        for(int i=0;i<mp[2].size();++i){
            if(i%2) ret[mp[2][i]]='H';
            else ret[mp[2][i]]='R';
        }
        for(int i=0;i<mp[3].size();++i){
            if(i%2) ret[mp[3][i]]='H';
            else ret[mp[3][i]]='R';
        }
        cout<<ret<<endl;
	}
	return 0;
	
}