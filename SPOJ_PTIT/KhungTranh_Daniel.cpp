#include<iostream>
using namespace std;


int main(){
	int T;
	cin>>T;
	for(int t=0;t<T;t++){
		int n,d=0; cin>>n;
		int num,c[101];
		for(int i=1;i<=100;i++) c[i]=0;
		for(int i=0;i<n;i++){
			cin>>num; c[num]++;
		}
		int s = 0;
		for(int i=1;i<=100;i++) 
			if(c[i]>1){
				if(c[i]%2!=0) c[i] = c[i]-1;
				s+=c[i];
			}
		cout<<s/4;
	}
}
