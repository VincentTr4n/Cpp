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
int i,j;

ll a[20][20];

int main() {
	int n;
	cin>>n;
	rep(i,n) {
		a[i][i]=sqr(1<<i);
		REP(j,i+1,n) {
			a[i][j]=1<<(j+i);
			a[j][i]=1<<(j+i);
		}
	}
	rep(i,n) {
		cout<<endl;
		rep(j,n) cout<<a[i][j]<<" ";
	}
	return 0;
}
