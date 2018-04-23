#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define lens(arr) arr.length()
#define print(x) cout<<x<<endl

using namespace std;
int i,j,t;
const ll inf = -11091997;


bool M[40][40],vis[1997];
int n,h[40],w[40],H,W;

bool check(int u, int v,int k){
	if(W-v+1<w[k]) return false;
	if(H-u+1<h[k]) return false;
	REP(i,u,u+h[k]) 
	REP(j,v,v+w[k]) if(M[i][j]) return false;
	return true;
}


bool TRY(int u,int v,int k){
	if(k==n) return true;
	if(!M[u][v]){
		REP(i,1,n+1){
			if(vis[i] && check(u,v,i)){
				bool ok;
				REP(t,u,u+h[i])
				REP(j,v,v+w[i]) M[t][j] = true;
				if(v<W) ok = TRY(u,v+1,k+1);
				else ok = TRY(u+1,1,k+1);
				if(ok) return true;
				vis[i] = false;
				REP(t,u,u+h[i])
				REP(j,v,v+w[i]) M[t][j] = false;
			 }
		}
	}
}




int main() {
	cin>>H>>W>>n;
	REP(i,1,n+1) cin>>h[i]>>w[i];
	REP(i,1,H+1) REP(j,1,W+1) M[i][j]=false;
	REP(i,1,n+1) vis[i]=false;
	
	if(TRY(0,0,0)) cout<<"1";
	else cout<<"0";
	
	
	
	return 0;
}
