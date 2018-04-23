#include<iostream>
using namespace std;


int main(){
	int a[100005],n,index=0,first,last,u=1,d=0,max=-1,ok=1;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	while(a[index]>a[index+1]){
		index++;
	}
	first=last=index;
	for(int i=index;i<n-1;i++){
		if(a[i]<a[i+1]){
			if(ok==0){
				if(u+d>max){
					max=u+d;
					first=last;
					last=i;
				}
				u=1; d=0;
				ok=1;
			}else u++;	
		}else{
			ok=0;
			d++;
		}
	}
	if(ok==0 && u+d+1>max){
		max=u+d+1;
		first=last;
		last=n-1;
	}
	cout<<max<<endl;
	cout<<"From "<<first<<" to "<<last<<endl;
}
