#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define FOR(i,a,b) for(int i = (a), _##i = (b); i <= _##i; i++)
#define FORD(i,a,b) for(int i = (a), _##i = (b); i >= _##i; i--)
#define FO(i,a,b) for(int i = (a), _##i = (b); i < _##i; i++)
#define FOD(i,a,b) for(int i = (a), _##i = (b); i > _##i; i--)

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
const long long INF=1e18;
const int N=123456;
int a[N], b[N], c[N];

string toBinary(int x){
	stack<int> st;
	string s = "";
	while(x != 0){
		int t = x % 2;
		x /= 2;
		st.push(t);
	}
	while(st.size()){
		int top = st.top(); st.pop();
		s =  s + char(top + '0');
	}
	while(s.size() < 8) s='0' + s;
	return s;
}

int main(){
	while(1){
		
		FOR(i,1,4) cin >> a[i];
		FOR(i,1,4) cin >> b[i];
		FOR(i,1,4) c[i] = a[i] & b[i];
		
		FOR(i,1,4) cout << c[i] << " ";	
		
		cout << endl;
		FOR(i,1,4) cout << toBinary(c[i]) << " ";
		cout << endl;
	}
	
	return 0;
}



