#include<iostream>
using namespace std;


int main(){
	int n,m;
	cin>>n>>m;
	int d = 0;
	int max = n>m?n:m;
	for(int i=0;i<=max;i++)
	for(int j=0;j<=max;j++)
		if(i*i+j==n && j*j+i==m) d++;
	cout<<d; 
}
