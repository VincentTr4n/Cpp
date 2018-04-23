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

#define MAX 2000006

int Z[2100006];

string cal(ll p,ll q){
	string res = "";
	int i = 1,tmp;
	while(i<=MAX){
		tmp = p/q;
		res+=(char)(tmp+'0');
		p = p%q;
		p*=10;
		i++;
	}
	return res;
}


int Zsearch(string txt,string s){
	s = txt + "$" + s;
	int n = len(s);
    int L, R, k;

    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
 
            while (R<n && s[R-L] == s[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (Z[k] < R-i+1) Z[i] = Z[k];
            else
            {
                L = i;
                while (R<n && s[R-L] == s[R]) R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
    for (int i = 0; i < n; ++i) if(Z[i]==len(txt)) return i - len(txt);
    return 0;
}


int main() {
	ll t,p,q;
	string s;
	cin>>t;
	while(t--){
		cin>>p>>q;
		cin>>s;
		string src = cal(p,q);
		print(Zsearch(s,src));
	}
	return 0;
}

