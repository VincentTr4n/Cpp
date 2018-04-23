#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

bool ss(double a,double b){
	return a>b;
}

double BSOR(double *a,int &n,double l,double r,int F){
	if(r-l<0.001) return (l+r)/2;
	double M = (l+r)/2;
	bool ok;
	int d = 0;
	for(int i=0;i<n;i++){
		d+=(int)(a[i]/M);
	}
	if(d>=F) return BSOR(a,n,M,r,F);
	else return BSOR(a,n,l,M,F);
}

void test(){
	int n,F; cin>>n>>F;
	double a[100005], t=0;
	F++;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n,ss);
	if(n>F) n=F;
	for(int i=0;i<n;i++){
		a[i] = a[i]*a[i];
		t+=a[i];
	}
	cout<<M_PI*(a,n,0,t/F,F);
}


int main(){
	int T; cin>>T;
	while(T--){
		test();
	}
	
}
