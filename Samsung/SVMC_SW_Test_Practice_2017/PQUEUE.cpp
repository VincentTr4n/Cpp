#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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


int main(){
	//freopen("mayin.txt","r",stdin);
	int t,n,x,m;
	cin>>t;
	while(t--){
		queue<pi> a;
		priority_queue<int> q;
		cin>>n>>m;
		rep(i,n){
			cin>>x;
			a.push(pi(x,i));
			q.push(x);
		}
		int cnt = 0;
		while(!a.empty()){
			int tmp = a.front().fi;
			int index = a.front().se;	
			a.pop();
			if(tmp != q.top()) a.push(pi(tmp,index));
			else{
				cnt++;
				q.pop();
				if(index==m) break;
			}
		}
		print(cnt);
	}

	return 0;
}
