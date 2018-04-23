#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;

int main()
{
	ll a,b;
	cin>>a>>b;
	a=a%2==0?a+1:a+2;
	b=b%2==0?b-1:b-2;
	ll n = 1+(b-a)/2;
	ll res = (a+b)*n/2;
	cout<<res;
	return 0;
}
