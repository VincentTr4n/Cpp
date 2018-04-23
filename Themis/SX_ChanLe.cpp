#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n,a,b[2000],j=0;
	cin>>n;
	stack<int> s;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2!=0) b[j++]=a;
		else s.push(a);
	}
	for(int i=0;i<j;i++) cout<<b[i]<<" ";
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}
