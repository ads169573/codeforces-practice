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
vector<int> v(1e6);
vector<int> w(1e6);
vector<int> y(1e6);
vector<int> z(1e6);
int f(int a){
    return v[a]==a?a:v[a]=f(v[a]);
}
void u(int a,int b){
    a=f(a);
    b=f(b);
    if(a<b){
        v[b]=a;
        w[a]+=w[b];
    }
    else if(a>b){
        v[a]=b;
        w[b]+=w[a];
    }
}
int main()
{	
	int N;
	cin>>N; 
	while(N--){
        int n;
        cin>>n;
        
        for(int i=1;i<=n;++i){
            v[i]=i;
            w[i]=1;
            z[i]=-1;
            y[i]=0;
        }
        for(int i=1;i<=n;++i){
            int j;
            cin>>j;
            u(i,j);
            if(z[i]==-1){
                z[i]=j;
            }
            else if(z[i]!=j){
                y[i]=1;
            }
            if(z[j]==-1){
                z[j]=i;
                
            }
            else if(z[j]!=i){
                y[j]=1;
            }
        }
        set<int>s;
        int a=0;
        for(int i=1;i<=n;++i){
            int tmp=f(i);
            s.insert(tmp);
            if(y[i]){
               w[tmp]--; 
               if(w[tmp]==0) a++;
            } 
        }
        if(a==0) a=1;
        else if(s.size()>a){
            a+=1;
        }
        cout<<a<<" "<<s.size()<<endl;

	}
	return 0;
	
}