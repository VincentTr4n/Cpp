#include<iostream>
#include<algorithm>
#include<cmath>
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
	int n,m,temp,a[1006]={};
	cin>>n>>m;
	rep(i,n){
		cin>>temp;
		a[temp]++;
	}
	rep(i,m){
		cout<<a[i]<<" ";
	}
	return 0;
}
