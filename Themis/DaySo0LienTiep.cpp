#include<iostream>
using namespace std;
int main(){
	int n,a,max=0,count=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a!=0){
			max=count>max?count:max;
			count=0;
		}else count++; 
	}
	cout<<(count>max?count:max);
}
