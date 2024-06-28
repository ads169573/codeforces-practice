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
        int n,k;
        cin>>n>>k>>s;
        int id=-1,l=0;
        while(l<n){
            int j=l;
            while((j<n) && (s[l]==s[j])) j++;
            if(j-l<k){id=j;break;}
            if(j-l>k){id=j-k;break;}
            l=j;
        }
        if(id==-1)id=n;
        string d="";
        for(int i= id;i<n;i++)d+=s[i];
        for(int i=id-1;i>=0;i--)d+=s[i];
        for(int i=0;i<k;i++)if(d[i]!=d[0])id=-1;
        for(int i=k;i<n;i++)if(d[i]==d[i-k])id=-1;
        cout<<id<<endl;
	}
    return 0;
}
