#include<iostream>
using namespace std;


int main(){
	int n,a[100005],u=0,d=0,max=-1;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=1;i<n;i++){
		if(a[i-1]<a[i] && d==0) u++;
		if(a[i-1]>=a[i]){
			if(u>0) d++;
			else d=0
		}
		
	} 
}
