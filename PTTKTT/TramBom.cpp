#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	int n,m,*a;
	cin>>n>>m;
	pair<int,int> b[m];
	a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++){
		cin>>b[i].first;
		b[i].second = i;
	}
	int ans[1000];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0;
	while(b[j].first<=a[0] && j<m){
		ans[b[j++].second] = -1;
	}
	while(j<m){
		while(i<n && b[j].first>=a[i]) i++;
		ans[b[j++].second] = a[i-1];
	}
	for(int i=0;i<m;i++) cout<<ans[i]<<endl;
}
