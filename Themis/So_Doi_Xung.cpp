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


int main() {
	string s;
	cin>>s;
	if(len(s)==1) cout<<"YES";
	else{
		i=0;j=len(s)-1;
		bool ok=true;
		while(i<j){
			if(s[i]!=s[j]){
				ok=false;
				break;
			}
			i++;
			j--;
		}
		cout<<(ok?"YES":"NO");
	}
	

	return 0;
}
