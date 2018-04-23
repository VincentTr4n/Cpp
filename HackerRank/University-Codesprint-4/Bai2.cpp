#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<vector>
#include<stack>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ii pair<int,int>
#define vpii vector<ii>
#define vi vector<int>
#define vii vector<ii>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j;

int main()
{
	int n,m,temp;
	vpii p,c;
	cin>>n>>m;
	rep(i,n){
		cin>>temp;
		p.add(make_pair(temp,i));
	}
	rep(i,n){
		cin>>temp;
		p[i].second = temp;
	}
	sort(p.begin(),p.begin()+len(p));
	rep(i,m){
		cin>>temp;
		c.add(make_pair(temp,i));
	}
	rep(i,m){
		cin>>temp;
		c[i].second = temp;
	}
	sort(c.begin(),c.begin()+len(c));
	stack<ii> s;
	rep(i,m) s.push(c[i]);
	while(!s.empty()){
		ii d = s.top();
		
	} 
	return 0;
}
