#include<iostream>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<string.h>
#include<vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vpi vector<pii>
#define all(arr) arr.begin(),arr.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;

int main() {
	int n,ok=0;
	while(true) {
		cin>>n;
		REP(i,1,sqrt(n)) REP(j,i,sqrt(n))
		if(i*i+j*j==n) {
			print(i*i+j*j);
			ok=1;
			break;
		}
		if(ok) cout<<"Ok";
		else cout<<"No";
		ok=0;
	}
	return 0;
}
