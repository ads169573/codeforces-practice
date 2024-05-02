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
int mod2=998244353;
void computeLPSArray(string& pat, int M, vector<int>& lps){
    int len = 0;
    lps[0] = 0; 
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else 
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int main()
{	
	int N;
    cin>>N;
	while(N--){
        int n,d;
        cin>>n>>d>>d;
        string s;
        cin>>s;
        int r=n/d;
        int ans=0;
        int l=0;
        while (l<r){
            int cnt=0;
            int i=0,j=0,m=(l+r+1)/2;
            string st;
            for(int i=0;i<m;++i) st+=s[i];
            vector<int> lps(m);
            computeLPSArray(st,m,lps);
            while ((n - i) >= (m - j)) {
                if (st[j] == s[i]) {
                    j++;
                    i++;
                }
                if (j == m) {
                    cnt++;
                    j = 0;
                }
                else if (i < n && st[j] != s[i]) {
                    if (j != 0)
                        j = lps[j - 1];
                    else
                        i = i + 1;
                }
            }
            if(cnt>=d){
                l=m;
            } 
            else{
                r=m-1;
            }
            
        }
        cout<<l<<endl;
    }
	return 0;
}
