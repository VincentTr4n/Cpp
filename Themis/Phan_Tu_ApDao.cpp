#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define sqr(x) ((x) * (x))
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


ll a[10000006];
int main() {
	long n,ok=0,cnt=1,res;
	cin>>n;
	rep(i,n) cin>>a[i];
	sort(a,a+n);
	rep(i,n-1) {
		if(a[i]==a[i+1]) cnt++;
		else {
			if(cnt>n/2) {
				ok=1;
				res=a[i];
				break;
			}
			cnt=1;
		}
	}
	if(!ok) cout<<"khong co phan tu ap dao";
	else cout<<res;
	return 0;
}
