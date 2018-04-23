#include<iostream>
using namespace std;

void QS(int *a,int left,int right){
	int mid = a[(left+right)/2];
	int i=left,j=right;
	while(i<=j){
		while(a[i]>mid) i++;
		while(a[j]<mid) j--;
		if(i<=j){
			if(i<j) swap(a[i],a[j]);
			i++; j--;
		}
	}
	if(i<right) QS(a,i,right);
	if(left<j) QS(a,left,j);
}

int main(){
	int a[] = {1,4,2,5,6,3,9};
	for(int i=0;i<7;i++) cout<<a[i]<<" ";
	cout<<endl;
	QS(a,0,6);
	for(int i=0;i<7;i++) cout<<a[i]<<" ";
}
