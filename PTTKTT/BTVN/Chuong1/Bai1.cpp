#include<iostream>
using namespace std;

int ucln(int a,int b){
	return b?ucln(b,a%b):a;
}

int main(){
	int n,a[100005],ans;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	ans=a[0];
	for(int i=1;i<n;i++){
		if(ans==1){
			cout<<"Khong co ucln khac 1!!"; break;
		}else ans=ucln(ans,a[i]);
	}
	if(ans!=1) cout<<ans;
}
