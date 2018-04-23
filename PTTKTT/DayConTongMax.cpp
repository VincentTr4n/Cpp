#include<iostream>
using namespace std;

int main(){
	int n;
	int a[100006];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	long s1 = 0;
	long temp = a[0];
	for(int i=1;i<n;i++){
		temp = temp>0?temp+a[i]:a[i];
		if(temp>s1) s1 = temp;
	}
	long s2 =0;
	for(int i=0;i<n;i++) if(a[i]>0) s2+=a[i];
	cout<<s1<<" "<<s2;
}
