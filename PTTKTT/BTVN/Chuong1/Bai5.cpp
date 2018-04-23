#include<iostream>
using namespace std;

void sangSNT(int *s,int &length,int n){
	bool *b=new bool[n+1];
	for(int i=2;i<=n;i++) b[i]=true;
	for(int i=2;i<=n;i++)
		if(b[i]){
			s[length++]=i;
			for(int j=i*i;j<=n;j+=i) b[j]=false;
		}
}

int main(){
	int n,s[100005],length=0,count=0;
	cin>>n;
	sangSNT(s,length,n);
	for(int a=0;a<length;a++)
		for(int b=a;b<length;b++)
			for(int c=b;c<length;c++) if((a+b+c)==n) count++;
	cout<<count<<endl;
}
