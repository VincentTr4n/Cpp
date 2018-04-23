#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define ll long long
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define all(arr) arr.begin(),arr.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<x<<endl
using namespace std;


struct suffix {
	int index;
	int rank[2];
};


int cmp(struct suffix a, struct suffix b) {
	return (a.rank[0] == b.rank[0])? (a.rank[1] < b.rank[1] ?1: 0):
		       (a.rank[0] < b.rank[0] ?1: 0);
}


int *buildSuffixArray(string txt, int n) {
	struct suffix suffixes[n];


	for (int i = 0; i < n; i++) {
		suffixes[i].index = i;
		suffixes[i].rank[0] = txt[i] - 'a';
		suffixes[i].rank[1] = ((i+1) < n)? (txt[i + 1] - 'a'): -1;
	}

	sort(suffixes, suffixes+n, cmp);


	int ind[n];

	for (int k = 4; k < 2*n; k = k*2) {

		int rank = 0;
		int prev_rank = suffixes[0].rank[0];
		suffixes[0].rank[0] = rank;
		ind[suffixes[0].index] = 0;


		for (int i = 1; i < n; i++) {

			if (suffixes[i].rank[0] == prev_rank &&
			        suffixes[i].rank[1] == suffixes[i-1].rank[1]) {
				prev_rank = suffixes[i].rank[0];
				suffixes[i].rank[0] = rank;
			} else {
				prev_rank = suffixes[i].rank[0];
				suffixes[i].rank[0] = ++rank;
			}
			ind[suffixes[i].index] = i;
		}


		for (int i = 0; i < n; i++) {
			int nextindex = suffixes[i].index + k/2;
			suffixes[i].rank[1] = (nextindex < n)? suffixes[ind[nextindex]].rank[0]: -1;
		}


		sort(suffixes, suffixes+n, cmp);
	}


	int *suffixArr = new int[n];
	for (int i = 0; i < n; i++)
		suffixArr[i] = suffixes[i].index;

	return  suffixArr;
}

int i;
int main() {
	freopen("input.txt", "r", stdin);
	int N;
	vector<string> suffix;
	cin>>N;
	string a[N+1];
	rep(i,N) cin>>a[i];
	rep(i,N) {
		string txt = a[i];
		int n = txt.length();
		int *suffixArr = buildSuffixArray(txt,  n);
		for(int i=0; i<n; i++) {
			string temp = txt.substr(suffixArr[i],n-suffixArr[i]);
			suffix.add(temp);
		}
	}
	sort(all(suffix));
	
	cerr << len(suffix) <<endl;
	//rep(i,len(suffix)) cout<<suffix[i]<<endl;
	
	
	int res = 0;
	int T[10006]={};
	rep(i,len(suffix)-1){
		int j=0,cnt=0;
		while(j<suffix[i].length()){
			if(suffix[i][j]==suffix[i+1][j]) cnt++;
			else break;
			j++;
		}
//		cerr<<cnt<<endl;
		T[cnt]++;
	}
	
	cerr<<T[1]<<endl;
	REP(i,0,10007) if(T[i]+1==N && i>res) res=i;
	cout<<res;
	return 0;
}
