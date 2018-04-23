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
const int N=1234567;

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
	string s;
	string rs = "";
	cin >> s;
	FOR(i,0,s.length()-1){
		rs += toBinary(s[i]);
	}	
	
	FOR(i,0,rs.length()-1){
		cout << rs[i];
		if ((i + 1) % 6 == 0) cout << endl;
	}
	
	cout << endl << endl;
	// 3 so
	string a = toBinary(s[0]) + toBinary(s[1]);
	string b = toBinary(s[2]) + "00000000";
	
	cout << "Check Sum:\n";
	cout << a << endl << b << endl;
	int du = 0;
	rs = "";
	FORD(i,a.length()-1,0){
		int tmp = (a[i] - '0' + b[i] - '0') + du;
		if (tmp == 2){
			du = 1;
			rs =  "1" + rs;
		} else {
			//rs = char(!((a[i] - '0' + b[i] - '0') + du) + '0') + rs;
			rs = char(!(tmp) + '0') + rs;
			du=0;	
		}
		
	}
	cout << rs << endl << endl;
	
	cout << "CRC:";
	FOR(i,0,s.length()-1) cout << toBinary(s[i]);
	return 0;
}



