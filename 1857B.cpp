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
        string s;
        cin>>s;
        int p=-1;
        string b="";
        for(int i=0;i<s.size();++i){
            if(p==-1){
                if(s[i]-'0'>=5) {
                    p=i;
                }
            }
            if(p!=-1) b+='0';
        }
        string pre="";
        if(p!=-1){
            if(p==0){
                pre="1";
            }
            else{
                int c=1;
                for(int i=p-1;i>=0;--i){
                    if(((s[i]-'0')+c)>=5)
                        pre+='0';
                    else
                        pre+=(s[i]-'0')+c+'0';
                    c=((s[i]-'0')+c)>=5;
                }
                if(c) pre+="1";
                reverse(pre.begin(),pre.end());
            }
        }
        if(p!=-1)
            cout<<pre<<b<<endl;
        else
            cout<<s<<endl;
        
	}
    return 0;
}