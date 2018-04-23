#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
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
#include<stack>
using namespace std;

int main() {
	int n,x;
	while(true){
		cin>>n;
		if(n==0) break;
		stack<int> s;
		int tmp = 0;
		rep(i,n){
			cin>>x;
			while(len(s) && s.top() == tmp+1){
				tmp++;
				s.pop();
			}
			if(x != tmp+1) s.push(x);
			else tmp++;
		}
		while(len(s) && s.top() == tmp+1){
			tmp++;
			s.pop();
		}
		puts(tmp==n?"Yes":"No");
	}
	
	
	return 0;
}

