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
const char DUMMY = '.';

int cnts[3006];

int manacher(string s) {
	int n = s.size() * 2 - 1;
	vector <int> f = vector <int>(n, 0);
	string a = string(n, DUMMY);
	memset(cnts,0,sizeof(cnts));
	for (int i = 0; i < n; i += 2) a[i] = s[i / 2];

	int l = 0, r = -1, center, res = 0;
	for (int i = 0, j = 0; i < n; i++) {
		j = (i > r ? 0 : min(f[l + r - i], r - i)) + 1;
		while (i - j >= 0 && i + j < n && a[i - j] == a[i + j]) j++;
		f[i] = --j;
		if (i + j > r) {
			r = i + j;
			l = i - j;
		}

		int len = (f[i] + i % 2) / 2 * 2 + 1 - i % 2;
		cnts[len]++;
		if (len > res) {
			res = len;
			center = i;
		}
	}

	return res;
}



int main() {
	int t;
	cin>>t;
	while(t-- >0) {
		string s;
		cin>>s;
		int res = manacher(s);
		cout<<res<<" "<<cnts[res]<<endl;
	}
	return 0;
}

