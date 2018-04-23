#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x) * (x))
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
	int t;
	string a[] = {"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"};
	cin>>t;
	while(t-- >0) {
		ll num,cur=6,next=1;
		cin>>num;
		if(num<=5) cout<<a[num-1]<<endl;
		else {
			while(cur<num) {
				next*=2;
				rep(i,5) cur+=next;
			}
			print(i);
			while(i>=0 && cur>num) {
				cur-=next;
				i--;
			}
			print(a[i%5]);
		}
	}
	return 0;
}
