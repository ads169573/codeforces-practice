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
        int n;
        cin>>n;
        int maxValue = -2e9 - 1;
		vector<int> ans;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (a[i] - x > maxValue) {
                ans.clear();
            }
            if (a[i] - x >= maxValue) {
                maxValue = a[i] - x;
                ans.push_back(i + 1);
            }
        }
    
        cout << ans.size() << '\n';
        for (auto e : ans) {
            cout <<e<<" ";
        }
        cout<<endl;
	}
	return 0;
	
}