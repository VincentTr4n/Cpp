#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define ull unsigned long long
#define ld long double
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;


struct SuffixArray {
	static const int maxn = 1e6 + 5;
	static const char SEP = '$';

	int n;
	char s[maxn];
	int sa[maxn], ra[2][maxn];
	int lcp[maxn];

	void build(char* t) {
		strcpy(s, t), n = strlen(s);
		for (int i = 0; i < n; i++) {
			sa[i] = i, ra[0][i] = 0, ra[1][i] = s[i] + 1;
		}
		for (int d = 1; radixsort(); d <<= 1) {
			for (int i = 0; i < n; i++) {
				if (i + d < n) {
					ra[1][i] = ra[0][i + d] + 1;
				} else {
					ra[1][i] = 0;
				}
			}
		}
		buildlcp();
	}

	int radixsort() {
		static int p[maxn];
		static int tmpsa[maxn];
		static int tmpra[maxn];
		int mx = max(256, n) + 1;
		for (int step = 1; step >= 0; step--) {
			fill_n(p, mx, 0);
			for (int i = 0; i < n; i++) {
				p[ra[step][i] + 1]++;
				tmpsa[i] = sa[i];
			}
			partial_sum(p, p + mx, p);
			for (int i = 0; i < n; i++) {
				sa[p[ra[step][tmpsa[i]]]++] = tmpsa[i];
			}
		}
		int ptr = 0;
		tmpra[sa[0]] = ptr;
		for (int i = 1; i < n; i++) {
			int u = sa[i - 1];
			int v = sa[i];
			if (ra[0][u] < ra[0][v] || ra[1][u] < ra[1][v]) {
				ptr++;
			}
			tmpra[v] = ptr;
		}
		for (int i = 0; i < n; i++) ra[0][i] = tmpra[i];
		return ptr < n - 1;
	}

	void buildlcp() {
		for (int i = 0, k = 0; i < n; i++) {
			if (!ra[0][i]) lcp[ra[0][i]] = 0;
			else {
				for (int j = sa[ra[0][i] - 1]; s[i + k] == s[j + k] && s[i + k] != SEP; k++);
				lcp[ra[0][i]] = k;
				k = max(k - 1, 0);
			}
		}
	}
} sa;

ll inf = 1e18;
 
int main() {
	int n,k,a[105],cnt=0,res=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i<=k && a[i]==0) cnt++;
		if(i>k && a[i]>=a[k] && a[i]!=0){
//			print(a[i]);
			res++;
		}
	}
	print(k+res-cnt);
	
	return 0;
}
