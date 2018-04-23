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
int i,j;

int main() {
	int n;
	ll x,sum=0,temp;
//	cin>>n;
//	while(n-- >0) {
//		cin>>x;
////		134209536
//		if(x<6) {
//			printf("%lld nao eh perfeito\n",x);
//		} else {
//			temp = x-1;
//			for(ll k=2; k*k<=x; k*=2) {
//				temp-=k;
//				temp-=x/k;
//			}
//			if(temp==0 && (x%6!=0 || x%12!=0)) cout<<x<<" eh perfeito\n";
//			else cout<<x<<" nao eh perfeito\n";
//		}
//	}
	for(ll i=10000000000000;i<=1000000000000000001;i++){
		x=i;
		temp = x-1;
			for(ll k=2; k*k<=x; k*=2) {
				temp-=k;
				temp-=x/k;
			}
			if(temp==0 && (x%6!=0 || x%12!=0)) cout<<x<<" ";
	}
	return 0;
}
