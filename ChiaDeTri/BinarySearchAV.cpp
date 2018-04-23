#include<iostream>
using namespace std;

void solution(int *a,int x,int n){
	int left = 0;
	int right = n-1;
	while(left<right){
		int m = (left+right)/2;
		if(a[m]>=x){
			right = m;
		}else{
			left = m+1;
		}
	}
	if(left == right && a[left]>=x) cout<<left+1;
	else cout<<"Can't find!!";
}


int main(){
	int n,x;
	cin>>n;
	int *a = new int[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>x;
	solution(a,x,n);
	
}
