#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	long a[2001],tbc,s=0;
	cin>>n;
	for(int i=0;i<n;i++) { cin>>a[i]; s+=a[i];}
	tbc = s/n;
	for(int i=0;i<n;i++) if(a[i]<tbc) count++;
	cout<<tbc<<" "<<count;
}
