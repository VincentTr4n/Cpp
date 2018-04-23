#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	pair<int,int> a[100005];
	int n,d=0,t;
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		cin>>a[i].first;
		a[i].second=temp;
	}
	sort(a,a+n);
	t=a[0].first;
	for(int i=1;i<n;i++){
		while(a[i].second>t) i++;
		t=a[i];
		d++;
	}
	
}
