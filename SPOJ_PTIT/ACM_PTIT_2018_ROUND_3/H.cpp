#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
//#define ii pair<int,int>
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


int a[100005],b[100005],c[100005],tmp[100005];

int min3(int t1,int t2,int t3){
	return min(min(t1,t2),t3);
}

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	a[0] = b[0] = c[0] = 0;
	
	REP(i,1,x+1) cin>>tmp[i];
	j=1;
	FORD(i,1,x) a[j]=a[j-1]+tmp[i], j++;
	
	REP(i,1,y+1) cin>>tmp[i];
	j=1;
	FORD(i,1,y) b[j]+=b[j-1]+tmp[i], j++;
	
	REP(i,1,z+1) cin>>tmp[i];
	j=1;
	FORD(i,1,z) c[j]+=c[j-1]+tmp[i], j++;
	
//	print("------------------------");
//	REP(i,1,x+1) cout<<a[i]<<" "; print("");
//	REP(i,1,y+1) cout<<b[i]<<" "; print("");
//	REP(i,1,z+1) cout<<c[i]<<" "; print("");
//	
//	
//	print("-----------------------");
	int m = min3(a[x],b[y],c[z]);
	int ii=x, jj=y, kk=z;
	while(ii>=0 && jj>=0 && kk>=0){
		while(a[ii]>m) ii--;
		while(b[jj]>m) jj--;
		while(c[kk]>m) kk--;
//		print(m);
		if(a[ii]==b[jj] && a[ii]==c[kk]) break;
		m = min3(a[ii],b[jj],c[kk]);
	}
	
	print(a[ii]);
	
	return 0;
}
