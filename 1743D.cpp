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
	int N=1;
	
	while(N--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        if (count(s.begin(),s.end(), '1') == 0){
            cout<<0<< endl;
            continue;
        }
        int i = 0;
        while (i < n && s[i] == '0')
            i++;
        string t = s.substr(i);
        int m = t.size();
        int z;
        for (i = 0; i < m; i++){
            if (t[i] == '0'){
                z = i;
                break;
            }
        }
        string ans = t;
        for (i = 0; i < z; i++){
            if (t[i] == '1'){
                string temp = t;
    
                for (int j = 0; j < m - z; j++){
                    temp[z + j] = max(temp[z + j], t[i + j]);
                }
                ans = max(ans, temp);
            }
        }
        cout << ans << endl;
    }
	return 0;
	
}