#include<iostream>
using namespace std;
// 4 2 6 8
int a[] = {6,8,4,2};
int myPow(int n,int cur,int temp){
	int ans = temp%10;
	if(cur==n) return ans;
	else return myPow(n,cur+1,ans*8);
}

int main(){
	long n;
	cin>>n;
	//cout<<myPow(n,1,8);
	if(n==0) cout<<1;
	else cout<<a[n%4];
}
