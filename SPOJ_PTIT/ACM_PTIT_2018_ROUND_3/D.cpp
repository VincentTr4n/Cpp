#include <bits/stdc++.h>
#include <numeric>
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

bool IsPrime(ll number)
{
	if (number == 1) return false;
    if (number == 2 || number == 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    ll divisor = 6;
    while (divisor * divisor - 2 * divisor + 1 <= number)
    {

        if (number % (divisor - 1) == 0) return false;
        if (number % (divisor + 1) == 0) return false;
        divisor += 6;
    }
    return true;
}

ll NextPrime(ll a)
{

    while (!IsPrime(++a)){
	}
    return a;

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	
	ll n,m;
	cin>>n>>m;
	vll a;
	ll cnt = 0;
	if(IsPrime(m)){
		cnt = 1;
		a.add(m);
	}
	while(cnt<n){
		m = NextPrime(m);
		a.add(m);
		cnt++;
	}
	rep(i,n){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
