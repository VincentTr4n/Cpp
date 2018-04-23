#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
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


int a[10000006];
int main() {
	ll n,temp,sum=0;
	cin>>n;
	bool ok = true;
	rep(i,n){
		cin>>temp;
		if(temp<=0 || temp>n){
			ok = false;
			break;
		}else sum+=temp;
	}
	n = n*(n+1)/2;
	if(sum==n) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
