#include<iostream>
#include<climits>
using namespace std;

int ucln(int a,int b){
	return b?ucln(b,a%b):a;
}
int MIN(int *a,int n){
	int min=INT_MAX;
	for(int i=0;i<n;i++) min=a[i]<min?a[i]:min;
	return min;
}
int main(){
	int n,a[100005],ans,min,i=1;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	min=MIN(a,n);
	if(a[0]==min){
		i=2; ans=a[1];
	}else ans=a[0];
	for(;i<n;i++){
		if(a[i]!=min){
			if(ans==1){
				cout<<"Khong co ucln khac 1!!"; break;
			}else ans=ucln(ans,a[i]);
		}
	}
	if(ans!=1) cout<<ans;
}
