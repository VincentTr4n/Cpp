#include<iostream>
using namespace std;


int main(){
	int n,a[100005],max=-1,pre;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	pre=a[0];
	for(int i=1;i<n;i++){
		max=pre-a[i]>max?pre-a[i]:max;
		pre=a[i]>pre?a[i]:pre;
	}
	cout<<max;
}
