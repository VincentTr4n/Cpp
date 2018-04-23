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



char a[1005][1005];
int m, n;

void knight(int x, int y) {
	int i, j, k;
	i = x - 2;
	j = y - 1;
	k = y + 1;
	if(i >= 0) {
		if(j >= 0)
			if(a[i][j] == '0')
				a[i][j] = 'x';
		if(k < m)
			if(a[i][k] == '0')
				a[i][k] = 'x';
	}
	i++;
	j--;
	k++;
	if(i >= 0) {
		if(j >= 0)
			if(a[i][j] == '0')
				a[i][j] = 'x';
		if(k < m)
			if(a[i][k] == '0')
				a[i][k] = 'x';
	}
	i += 2;
	if(i < n) {
		if(j >= 0)
			if(a[i][j] == '0')
				a[i][j] = 'x';
		if(k < m)
			if(a[i][k] == '0')
				a[i][k] = 'x';
	}
	i++;
	j++;
	k--;
	if(i < n) {
		if(j >= 0)
			if(a[i][j] == '0')
				a[i][j] = 'x';
		if(k < m)
			if(a[i][k] == '0')
				a[i][k] = 'x';
	}
}

void queen(int x, int y) {
	int i, j;
	i = y - 1;
	j = x - 1;
	while(i >= 0 && (a[x][i] == '0' || a[x][i] == 'x'))
		a[x][i--] = 'x';
	while(j >= 0 && (a[j][y] == '0' || a[j][y] == 'x'))
		a[j--][y] = 'x';
	i = y + 1;
	j = x + 1;
	while(i < m && (a[x][i] == '0' || a[x][i] == 'x'))
		a[x][i++] = 'x';
	while(j < n && (a[j][y] == '0' || a[j][y] == 'x'))
		a[j++][y] = 'x';
	i = y + 1;
	j = x + 1;
	while((i < m && j < n) && (a[j][i] == '0' || a[j][i] == 'x'))
		a[j++][i++] = 'x';
	i = y - 1;
	j = x - 1;
	while((i >= 0 && j >= 0) && (a[j][i] == '0' || a[j][i] == 'x'))
		a[j--][i--] = 'x';
	i = y - 1;
	j = x + 1;
	while((i >= 0 && j < n) && (a[j][i] == '0' || a[j][i] == 'x'))
		a[j++][i--] = 'x';
	i = y + 1;
	j = x - 1;
	while((i < m && j >= 0) && (a[j][i] == '0' || a[j][i] == 'x'))
		a[j--][i++] = 'x';
}

main() {
	int k, q, p, r, c, z = 0, w = 1;
	rep(i,1005) rep(j,1005) a[i][j] = '0';
	while(true) {
		z = 0;
		cin>>n>>m;
		if(n == 0 && m == 0) break;

		cin>>q;
		for(int i = 0; i < q; i++) {
			cin>>r>>c;
			a[r - 1][c - 1] = 'q';
		}

		cin>>k;
		rep(i,k) {
			cin>>r>>c;
			a[r - 1][c - 1] = 'k';
		}

		cin>>p;
		rep(i,p) {
			cin>>r>>c;
			a[r - 1][c - 1] = 'p';
		}

		rep(i,n) rep(j,m) {
			if(a[i][j] == 'k')
				knight(i, j);
			else if(a[i][j] == 'q')
				queen(i, j);
		}

		rep(i,n) rep(j,m) if(a[i][j] == '0') z++;

		printf("Board %d has %d safe squares.\n", w++, z);

		rep(i,n) rep(j,m) a[i][j] = '0';
	}
}
