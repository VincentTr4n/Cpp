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

const ll inf = -1e18;

ll a[1000006];

ll solution(ll *A,int n)
{
    if (n < 1) return 0;
    ll max = inf;
    ll res = inf;
    for(int i = n-1; i >= 0; --i)
    {
        if(a[i] > max) max = a[i];
        ll tmp = max - a[i];        
        if(tmp > res) res = tmp;
    }
    return res;
}


int main() {
	int n;
	cin>>n;
	rep(i,n) cin>>a[i];
	
	ll res = solution(a,n);
	if(res==0){
		print(a[1]-a[0]);
	}else print(res);
	return 0;
}
