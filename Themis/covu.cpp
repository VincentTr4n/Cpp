#include<iostream>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<string.h>
#include<vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;
// X -> +1
// D -> -1
// quantity X equals D -> SUM = 0
//
unordered_map<int,int> map;
bool contains(int val){
	return map.find(val)!=map.end();
}
int main()
{
	int sum=0,res=0;
	map[0]=-1; 
	string s;
	cin>>s;
	rep(i,s.length()){
		sum+=s[i]=='X'?1:-1;
		if(contains(sum)) res=max(i-map[sum],res); 
		else map[sum]=i;
	}
	cout<<res;
	return 0;
}
