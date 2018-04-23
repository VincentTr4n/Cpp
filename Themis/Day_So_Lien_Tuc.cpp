#include <bits/stdc++.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

string up(string x) {
	int tmp = 1;
	int n = len(x);

	for(int k=n-1; k>=0; k--) {
		int t = x[k]-'0'+tmp;
		x[k] = (char)(t%10+'0');
		tmp = t/10?1:0;
	}
	if(tmp==1) x = "1"+x;
	return x;
}


int main() {

	//print(up("10"));
	int t;
	cin>>t;
	while(t--) {
		string s;
		cin>>s;
		int n = len(s);
		if(n==1) {
			print("NO");
			continue;
		}
		bool check = 1;
		REP(i,1,n/2+1) {
			bool ok = 1;
			string t = s.substr(0,i);
			int tmp = len(t);
			for(int j=i; j+tmp<=n; j+=tmp) {
				t = up(t);
				tmp = len(t);
//				print(t);
				if(t!=s.substr(j,tmp)) {
					ok = 0;
					break;
				}
			}
//			print("");
//			print("-----------------");
			if(ok) {
				string res = s.substr(0,i);
				if(res=="01") cout<<"NO";
				else cout<<"YES "<<res;
				check = 1;
				break;
			}
			check = 0;
		}
		if(!check) cout<<"NO";
		print("");
	}
	return 0;
}
