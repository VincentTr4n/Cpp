#include<iostream>
using namespace std;


int main(){
	int n,pre,curr,ans=1,d=1;
	cin>>n;
	cin>>pre;
	for(int i=1;i<n;i++){
		cin>>curr;
		if(curr>=pre){
			d++;
			ans=d>ans?d:ans;
		}
		else d=1;
		pre = curr;
 	}
 	cout<<ans;
}
