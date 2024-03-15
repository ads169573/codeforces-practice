#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define PB push_back
#define RPQ(T) priority_queue<T,vector<T>,greater<T>>
#define PQ(T) priority_queue<T>
/*std = c++2a*/
int main(){
    int N;
    cin>>N;
	while(N--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        unordered_map<char,RPQ(string)> mp;
        for(int i=0;i<2*n;++i){
            string s;
            cin>>s;
            mp[s[1]].push(s);
        }
        vector<string> v;
        bool chk=1;
        for(auto [k,pq]:mp){
            if(k==c) continue;
            while(!pq.empty()){
                string a,b;
                if(pq.size()==1){
                    a=pq.top();
                    pq.pop();
                    if(mp[c].empty()){
                        chk=0;
                        break;
                    }
                    b=mp[c].top();
                    mp[c].pop();
                }
                else{
                    a=pq.top();
                    pq.pop();
                    b=pq.top();
                    pq.pop();
                }
                v.PB(a);
                v.PB(b);
            }
        }
        if(mp[c].size()%2){
            chk=0;
        }
        else{
            while(!mp[c].empty()){
                string a=mp[c].top();
                mp[c].pop();
                string b=mp[c].top();
                mp[c].pop();
                v.PB(a);
                v.PB(b);
            }
        }
        if(chk){
            for(int i=0;i<2*n;i+=2){
                cout<<v[i]<<" "<<v[i+1]<<endl;
            }
        }
        else{
            cout<<"IMPOSSIBLE\n";
        }
	}
    return 0;
}