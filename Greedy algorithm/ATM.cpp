#include<iostream>
#include<cmath>
using namespace std;
long long N[] = {0,1,1,1,2,1,2,2,2,3};
long long S[] = {1,1,1,1,2,1,2,1,1,3};

void dt(long long w, int c,long long &n,long long &s){
	if(w<10){
		n+=N[w]; s*=S[w]; return;
	}
	if(c==0){
		long long k = w%5+5;
		w = w-k;
		n+=w/5+N[k];
		s*=S[k];
		return ;
	}
	n+=N[w%10]; s*=S[w%10];
	dt(w/10,c-1,n,s);
}

void test(){
	long long w,n=0,s=1;
	int c;
	cin>>w>>c;
	if(w%1000!=0){
		cout<<0; return;
	}
	dt(w/1000,c,n,s);
	cout<<n<<s;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) test();
}
