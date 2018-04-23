#include<iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	int n,a,b; cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a>>b;
		v.push_back(a+b);
	}
	for(int i=0;i<n;i++) cout<<v[i]<<endl;
}
