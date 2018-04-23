#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;



int main() {
	while(true) {
		int x;
		cin>>x;
		if(x==0) break;
		string a;
		cin>>a;
		int n = len(a);
		if(n%x) {
			rep(i,(x-n%x)) a+="#";
		}
		int index = 0;
		vector<string> res;
		for(i=0; i<len(a); i+=x) {
			string tmp="";
			if(index%2) {
				for(j=i+x-1; j>=i; j--) {
					tmp+=a[j];
				}
			} else {
				for(j=i; j<i+x; j++) {
					tmp+=a[j];
				}
			}
			index++;
			res.add(tmp);
		}
		string ans="";
		rep(i,x){
			rep(j,len(res)){
				if(res[j][i]=='#') continue;
				ans+=res[j][i];
			}
		}
		print(ans);

	}

	return 0;
}

