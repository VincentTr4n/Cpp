#include<iostream>
using namespace std;
int main()
{
	long n;
	long temp;
	long a[100000];
	cin>>n;
	//int *b = new int [100000];
	for(int i=1;i<=100000;i++) a[i]=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		a[temp]++;
	}
	int count = 0;
	for(int i=1;i<=100000;i++)
	{
		if(a[i]>1) count+=(a[i]*(a[i]-1))/2;
	}
	cout<<count;
}
