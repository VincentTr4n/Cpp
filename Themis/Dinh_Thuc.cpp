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
#define vll vector<ll>
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;
int i,j,t,n;
const double eps = 1e-9;
double a[105][105];
double DET(){
	double det = 1;
	rep(i,n){
		int k=i;
		REP(j,i+1,n) if(abs(a[j][i])>abs(a[k][i])) k=j;
		if(abs(a[k][i])<eps){
			det=0;
			break;
		}
		if(k!=i){
			rep(j,n){
				double temp = a[i][j];
				a[i][j] = a[k][j];
				a[k][j] = temp;
			}
			det = -det;
		}
		det*=a[i][i];
		REP(j,i+1,n) a[i][j]/=a[i][i];
		rep(j,n)
			if(j!=i && abs(a[j][i])>eps)
				REP(t,i+1,n) a[j][t]-=a[i][t]*a[j][i];
	}
	return det;
}

int main()
{
	cin>>n;
	rep(i,n)
	rep(j,n) cin>>a[i][j];
	printf("%0.2f",DET());
}
