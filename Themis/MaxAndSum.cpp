#include<iostream>
using namespace std;


int main(){
	int n,a[1000],t,s=0;
	float max = -999999;
	cin>>n; t=n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
		max = (a[i]/t)>max?(a[i]/t):max;
		t--;
	}
	for(int i=1;i<n-1;i++) s+=a[i];
	printf("%0.2f\n",max);
	cout<<s<<endl;
}
