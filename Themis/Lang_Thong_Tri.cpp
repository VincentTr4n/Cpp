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
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

const int MAX_N = 102;

int n;
int a[MAX_N][MAX_N];
bool vis[MAX_N];

void dfs(int curr) {
	vis[curr] = true;
	for (int i = 0; i < n; i++)
		if (a[curr][i] && !vis[i])
			dfs(i);
}

void PrintLn() {
	cout<<("+");
	rep(i,n*2-1) cout<<("-");
	cout<<("+")<<endl;
}

int main() {
	int t,tc=1;
	cin>>t;
	while(t-- >0) {
		cin>>n;
		rep(i,n) rep(j,n) cin>>a[i][j];

		bool M[MAX_N][MAX_N];
		memset(M, false, sizeof(M));
		M[0][0] = true;
		for (int i = 1; i < n; i++) {
			M[0][i] = true;
			memset(vis, false, sizeof(vis));
			vis[i] = true;
			dfs(0);
			rep(j,n)
			if (!vis[j])
				M[i][j]= true;
			M[i][i] = true;
		}

		memset(vis, false, sizeof(vis));
		dfs(0);

		cout<<"Case "<<(tc++)<<":"<<endl;
		PrintLn();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout<<(M[i][j] && vis[j] ? "|Y" : "|N");
			}
			cout<<("|\n");
			PrintLn();
		}

	}
	return 0;
}
