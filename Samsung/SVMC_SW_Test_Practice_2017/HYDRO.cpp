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

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n+4];
		rep(i,n) cin>>a[i];
		i=0;
		j=n-1;
		int left = a[i];
		int right = a[j];
		int res=0;
		while(i<j){
			if(left<right){
				i++;
				if(a[i]>=left) left = a[i];
				else res+=left-a[i];
			}else{
				j--;
				if(a[j]>=right) right=a[j];
				else res+=right-a[j];
			}
		}
		print(res);
	}
	return 0;
}
