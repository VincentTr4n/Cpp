#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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

#define N 1000006
ll a[N];

int main() {
	//freopen("in.txt","r",stdin);
	int n;
	cin >> n;
	rep(i, n) cin >> a[i];
	int i = 0, j = n - 1;
	int cnt = 0;
	while(i <= j){
		if(a[i] != a[j]){
			if(a[i] < a[j]){
				cnt++;
				a[i + 1] += a[i];
				i++;
			}
			else{
				cnt++;
				a[j - 1] += a[j];
				j--;
			}
		}
		else{
			i++;
			j--;
		}
	}
 	print(cnt);
	return 0;
}

