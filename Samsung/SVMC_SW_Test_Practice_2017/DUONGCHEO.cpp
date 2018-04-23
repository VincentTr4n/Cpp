#include <bits/stdc++.h>
#include <numeric>
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

int a[104][104];

int main(){
	//freopen("duongcheo.txt","r",stdin);
	int n;
	cin>>n;
	rep(i,n) rep(j,n) cin>>a[i][j];
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
	rep(i,n) sum1+=a[i][i];
	print(sum1);
	int j = 0;
	ford(i,n) sum2+=a[i][j++];
	print(sum2);
	j=1;
	rep(i,n-1) sum3+=a[i][j++];
	j=0;
	REP(i,1,n-1) sum4+=a[i][j++];
	cout<<sum3<<" "<<sum4<<endl;
	j=0;
	FORD(i,n-2,0) sum5+=a[i][j++];
	j=1;
	FORD(i,n-1,1) sum6+=a[i][j++];
	cout<<sum5<<" "<<sum6<<endl;
	return 0;
}
