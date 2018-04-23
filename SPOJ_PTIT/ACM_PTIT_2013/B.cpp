#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
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
#define print(x) cout<<(x)<<endl
using namespace std;

map<string,int> src;

bool cmp(pair<string,int> a,pair<string,int> b){
	if(a.se != b.se) return a.se > b.se;
	else return a.fi < b.fi;
}

void win(string a,string b){
	vector<pair<string,int>> v;
	src[a]+=3;
	for(auto item : src){
		v.add(make_pair(item.fi,item.se));
	}
	sort(all(v),cmp);
	rep(i,len(v)) if(v[i].fi==a){
		cout<<(i+1)<<" ";
	}
	src[a]-=3;
}

void loss(string a,string b){
	vector<pair<string,int>> v;
	src[b]+=3;
	for(auto item : src){
		v.add(make_pair(item.fi,item.se));
	}
	sort(all(v),cmp);
	rep(i,len(v)) if(v[i].fi==a){
		cout<<(i+1)<<" ";
	}
	src[b]-=3;
}

void draw(string a,string b){
	vector<pair<string,int>> v;
	src[a]++;
	src[b]++;
	for(auto item : src){
		v.add(make_pair(item.fi,item.se));
	}
	sort(all(v),cmp);
	rep(i,len(v)) if(v[i].fi==a){
		cout<<(i+1)<<" ";
	}
	src[a]--;
	src[b]--;
}


int main() {
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		string a,b,c;
		cin>>a>>b;
		rep(i,n){
			cin>>c>>x;
			src[c] = x;
		}
		win(a,b);
		loss(a,b);
		draw(a,b);
		print("");
		src.clear();
	}
	return 0;
}

