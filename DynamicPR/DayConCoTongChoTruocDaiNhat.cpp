#include<iostream>
using namespace std;


int main(){
	int n,a[100005],T,s=0,max=1,j,temp,first,last,ok=0;
	cin>>n>>T;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		s+=a[i];
		temp=0;
		j=0;
		while(s-temp>=T && j<=i){
			if(s-temp==T){
				ok=1;
				if(i-j>=max){
					max=i-j;
					first=j;
					last=i;
				}
				break;
			}
			temp+=a[j];
			j++;
		}
	}
	if(ok==1) cout<<first<<"->"<<last;
	else cout<<"Khong co day con thoa man!!";
}
