#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int *a;
	int max = 0;
	cin>>n;
	a = new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(int j = n-1;j>0;j--)
	{
		if(a[j]+n-j>max) max = a[j]+n-j;
	}
//	max = max+1;
	cout<<++max;
}
