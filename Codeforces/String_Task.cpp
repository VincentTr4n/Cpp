#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <numeric>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define ull unsigned long long
#define ld long double
#define pi pair<int,int>
#define vi vector<int>
#define vii vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;
int i,j;

bool isVowels(int c){
	if(c==0 || c==4 || c==14 || c==24 || c==20 || c==8) return true;
	return false;
}


int main() {
	string s;
	cin>>s;
	rep(i,len(s)){
		int c;
		if(s[i]>=97) c=s[i]-97;
		else c=s[i]-65;
		if(!isVowels(c)) cout<<"."<<(char)(97+c);
	}
	return 0;
}
