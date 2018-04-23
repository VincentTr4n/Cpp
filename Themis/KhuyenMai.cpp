#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
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
#define lens(arr) arr.length()
#define print(x) cout<<(x)<<endl

using namespace std;
int i,j,k;
const ll inf = -11091997;

int a[1000009];

bool cmp(int a,int b) {
	return a>b;
}


int main() {
	int n;
	ll sum = 0, res = 0;
	cin >> n;
 	rep(i,n){
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n, cmp);
	rep(i,n) {
		if (i + 2 < n) {
			int free = a[i + 2];
			int sale = (a[i] / 3 + a[i + 1] / 3 + a[i + 2] / 3);
			res += free > sale ? free : sale;
			i += 2;
		} else {
			while (i <= n) {
				res += a[i] / 3;
				i++;
			}
		}
	}
	print(sum-res);
	return 0;
}
