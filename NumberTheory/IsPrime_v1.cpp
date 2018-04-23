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


ll power(ll a, ull n, ll p)
{
    ll res = 1;
    a = a % p;  
 
    while (n > 0)
    {
        if (n & 1) res = (res*a) % p;
        n = n>>1; 
        a = (a*a) % p;
    }
    return res;
}
 

bool isPrime(ull n,ll k)
{
   if (n <= 1 || n == 4)  return false;
   if (n <= 3) return true;
   while (k>0)
   {
       int a = 2 + rand()%(n-4);  
 
       if (power(a, n-1, n) != 1) return false;
       k--;
    }
    return true;
}

int main() {
	ll n=12345678912;
//cin>>n;
	print((isPrime(n,1997))?"YES":"NO");
	return 0;
}
