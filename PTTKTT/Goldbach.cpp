#include<iostream>
using namespace std;

bool check(int num){
	int count = 0;
	for(int i=1;i*i<=num;i++){
		if(num%i==0) count++;
	}
	return count==1?true:false;	
}

void primeN(int n,int *a,int &length){
	for(int i=2;i<=n;i++)
		if(check(i)){
			a[length++] = i;
		}
}

int main(){
	int a[100000],n,ans = 0;
	int length = 0; 
	cin>>n;
	primeN(n,a,length);
	for(int i=0;i<length;i++)
		for(int j=i;j<length;j++)
			for(int k=j;k<length;k++)
				if(a[i]+a[j]+a[k]==n) ans++;
	cout<<ans<<endl;
}
