#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
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
int i,j;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); 
	
	string s;
	cin>>s;
	
	unordered_map<long,bool> map;
	
	int start = s[0]-'a'+1;
	int cnt = 1;
	for(int i=1;i<len(s);i++){
		int tmp = s[i]-'a'+1;
		if(!map[start*cnt]) map[start*cnt] = true;
		if(start!=tmp){
			cnt=1;
			start = tmp;
		}else cnt++;
	}
	map[start*cnt]=true;
	
	int x;
	cin>>x;
	while(x-- >0){
		int q;
		cin>>q;
		print(map[q]?"Yes":"No");
	}
	
	
	return 0;
}
