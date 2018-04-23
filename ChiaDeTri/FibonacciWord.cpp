#include<iostream>
#include<string>
using namespace std;

typedef unsigned long long LL;
LL M[123];
LL F[123];
void tF(){
	F[0] = F[1] = 1;
	M[0] = M[1] = -1;
	for(int i=2;i<=100;i++) {
		F[i] = F[i-1]+F[i-2];
		M[i] = -1;
	}
}

bool ispostfix(int n,string s,int m){
	if()
}

LL fw(string p,int m,int n){
	if(m>M[0]) return M[0] = 0;
	if(M[n]>0) return M[n];
	LL d = 0;
	for(int k=1;k<m;k++)
	{
		string p1 = string(p,0,k);
		string p2 = string(p,k,m-k);
		if(ispostfix(n-1,p1,k))
			if(ispostfix(n-2,p2,m-k)) d++;
	}
}

int main(){	
	
}
