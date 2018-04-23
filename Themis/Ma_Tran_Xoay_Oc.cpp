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
#define print(x) cout<<x<<endl

using namespace std;
int i,j;
const ll inf = -11091997;

int main() {
	int a[205][205];
	int minr = 0, minc = 0, maxc, maxr, value = 1, n;
	cin>>n;
	maxr = n-1;
	maxc = n-1;
	do {
		for (int i = minc; i <= maxc; i++)
			a[minr][i] = value++;
		minr++;
		for (int i = minr; i <= maxr; i++)
			a[i][maxc] = value++;
		maxc--;
		for (int i = maxc; i >= minc; i--)
			a[maxr][i] = value++;
		maxr--;
		for (int i = maxr; i >= minr; i--)
			a[i][minc] = value++;
		minc++;
	} while (value <= sqr(n));

	for(int i=0; i<n; i++) {
		cout<<endl;
		printf("%d",a[i][0]);
		for(int j=1; j<n; j++) printf("%10d",a[i][j]);
	}



	return 0;
}
