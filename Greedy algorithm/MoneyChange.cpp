#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int d = 0;
	int k = 1000 - n;
	int t[] = {500,100,50,10,5,1};
	for(int i = 0;i<6;i++)
	{
		d += k/t[i];
		k %=a[i];
	}
	cout<<d;
}
