#include<iostream>
using namespace std;
int main(){
	int n,a,s1=0,s2=0,d1=0,d2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0){
			s1+=a; d1++;
		}else{
			s2+=a; d2++;
		}
	}
	cout<<(d2==0?0:s2/d2)<<endl; cout<<(d1==0?0:s1/d1);
}
