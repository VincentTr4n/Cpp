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
#define print(x) cout<<(x)<<endl

using namespace std;
int i,j,k;
const ll inf = -11091997;
int M[105][105];

long kadane(int* arr, int* start, int* finish, int n) {
	long sum = 0, maxSum = -2147483648;

	*finish = -1;
	int local_start = 0;

	rep(i,n){
		sum += arr[i];
		if (sum < 0) {
			sum = 0;
			local_start = i+1;
		} else if (sum > maxSum) {
			maxSum = sum;
			*start = local_start;
			*finish = i;
		}
	}
	if (*finish != -1)
		return maxSum;

	maxSum = arr[0];
	*start = *finish = 0;

	REP(i,1,n){
		if (arr[i] > maxSum) {
			maxSum = arr[i];
			*start = *finish = i;
		}
	}
	return maxSum;
}

long solution(int n) {
	long maxSum = -2147483648;
	long temp[n], sum, start, finish;

	rep(i,n){
		rep(j,n) temp[j]=0;
		REP(j,i,n){
			rep(k,n) temp[k] += M[k][j];
			sum = kadane(temp, &start, &finish, n);
			maxSum=max(sum,maxSum);
		}
	}
	return maxSum;
}
int main() {
	int n;
	cin>>n;
	rep(i,n) rep(j,n) cin>>M[i][j];
	print(solution(n));
	return 0;
}
