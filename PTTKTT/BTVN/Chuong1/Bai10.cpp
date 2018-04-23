#include<iostream>
#include<limits>
using namespace std;

int main(){
	int n;
	long a[100005],min,max,t;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	min=Min(a,n);
	max=Max(a,n);
}
