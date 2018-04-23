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
#define all(a) a.begin(),a.end() 
#define add push_back
#define len(arr) arr.size()
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;


int main() {
	string n;
	cin >> n;
	if (next_permutation(all(n))) cout << n;
	else cout << "KHONG CO HOAN VI TIEP THEO";
//	int a[11]={0};
//	bool ok=1;
//	cin>>n;
//	for(i=lens(n)-1;i>=1;i--){
//		a[n[i]-'0']++;
//		if(n[i]>n[i-1]){
//			ok=0;
//			a[n[i-1]-'0']++;
//			i--;
//			break;
//		}
//	}
//	if(ok) cout<<"KHONG CO HOAN VI TIEP THEO";
//	else{
//		rep(j,i) cout<<n[j];
//		int t = n[i]-'0';
//		REP(j,t+1,10) if(a[j]>0) break;
//		cout<<j;
//		a[j]--;
//		rep(i,10) if(a[i]>0) rep(j,a[i]) cout<<i;
//	}
	return 0;
}
