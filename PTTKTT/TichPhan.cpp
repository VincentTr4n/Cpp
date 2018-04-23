#include<iostream>
using namespace std;

double f(double x){return 4/(1+x*x);}
double tichphan(int a,int b,double f(double),int n){
	double h=(b-a)/n,S=f(a);
	for(int i=1;i<=n;i++){
		S+=f(a+(2*i-1)/2);
	}
	return S*h;
}

int main(){
	cout<<tichphan(0,1,f,1000000);
}
