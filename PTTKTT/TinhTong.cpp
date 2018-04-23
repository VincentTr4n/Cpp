#include<iostream>
#include<cmath>
using namespace std;

long factorial(int n){
	if(n==0 || n==1) return 1;
	return n*factorial(n-1);
}

float myPow(int n,float x){
	if(n==1) return sin(x);
	return sin(x)*myPow(n-1,x);
}

int main(){
	int n;
	float x,y;
	float s = 0;
	cin>>n>>x>>y;
	if(x+y==0.0) cout<<"Khong tinh duoc";
	else{
		int temp  = 1;
		for(int i=1;i<=n;i++){
		float t = myPow(i,x)+1;
		float m = factorial(i)*(x+i*y);
		s+=temp*t/m;
		temp*=-1;
		}
		if(s-1<0) cout<<"Khong tinh duoc";
		else cout<<sqrt(-1 + s);
	}
}
