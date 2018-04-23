#include<iostream>
using namespace std;
// Cn = An + Bn
// An = Bn-1
// Bn = An-i  K1<=i<=K2


int main(){
	int n,k1,k2;
	long A[1005],B[1005];
	cin>>n>>k1>>k2;
	A[0]=B[0]=1;
	for(int k=1;k<=n;k++){
		A[k] = B[k-1];
		B[k] = 0;
		for(int i = k1;i<=k2;i++){
			if(i>=0 && i<=k) B[k]+=A[k-i];
		}
	}
	long ans = A[n] + B[n];
	cout<<ans;
	
}


