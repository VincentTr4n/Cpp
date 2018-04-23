#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
//#define REP(i,a,b) for(i=a;i<b;i++)
#define REP(i,a,b) for(int i = (a) , _##i = (b) ; i <= _##i ; i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,a,b) for(int i=(b);i>=(a);i--)
#define ford(i,n) FORD(int i,0,n-1)
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

ll a[200005]={};
ll dp[2000000];

void solve(ll lo, ll hi, ll *dp)
{
	if(lo == hi)
	return;
	
	ll mid = lo + (hi - lo)/2;
	
	solve(lo, mid, dp);
	solve(mid + 1, hi, dp);
	
	for(j = lo ; j <= mid ; j++)
	{
		dp[j]+= dp[j + (hi - lo + 1)/2];
	}
}

ll cnt = 0;
ll getbits(string s)
{
	ll ans = 0;
	int num[10] = {};
	rep(j,len(s))
	{
		int tmp = s[j] - '0';
    	ans |= (1 << (tmp));
    	num[tmp]++;
    }
    bool ok = true;
    rep(j,10) if(num[j]==0) ok=false;
    if(ok) cnt++;
    return ans;
}
 
int main()
{	

	//freopen("input18.in", "r", stdin);
	ll n;
	cin >> n;
	ll ans = 0;
	
	rep(i,n)
	{
		string s;
		cin >> s;
		a[i] = getbits(s);
		if(a[i] == pow(2,10) - 1) ans++;
		dp[a[i]]++;
	}
	solve(0, pow(2,10) - 1, dp);
	
	ll res = 0;
	rep(i,n) res += dp[(ll)pow(2,10) - 1 - a[i]];
	
	res -= ans;
	res /= 2;
	res += ans;
	res -= cnt;
	print(res);
} 
