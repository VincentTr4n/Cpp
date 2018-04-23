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

int main()
{
	long a,b;
	vi res;
	while(true){
		cin>>a>>b;
		if(a==0 && b==0) break;
		a=a%9==0?9:a%9;
		b=b%9==0?9:b%9;
		int temp = a>b?1:(a==b)?0:2;
		res.add(temp);
	}
	rep(i,len(res)) print(res[i]);
	return 0;
}
