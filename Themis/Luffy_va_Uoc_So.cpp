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


ll OddDivsSum(int n) {
	ll sum = 0;
	for(int i=1; i*i<=n; ++i) {
		if(n%i==0) {
			if(i&1) sum+=i;
			int temp = n/i;
			if(temp!=i && temp&1) sum+=temp;
		}
	}
	return sum;
}

int main() {
	int T;
	cin>>T;
//	while(T-- >0){
//		for(int i=a;i<=b;i++){
//			
//		}	
//	}
	cout<<OddDivsSum(T);
	return 0;
}
