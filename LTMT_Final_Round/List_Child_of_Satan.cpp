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


vector<string> mlist;

int main() {
	int n,cnt1=0,cnt2=0;
	cin>>n;
	rep(i,n){
		string a,b;
		cin>>a>>b;
		if(a=="+") cnt1++;
		else cnt2++;
		mlist.add(b);
	}
	cout<<"Tong so tre ngoan: "<<cnt1<<" | Tong so tre hu: "<<cnt2<<endl;
	sort(all(mlist));
	rep(i,n) print(mlist[i]);
	return 0;
}
