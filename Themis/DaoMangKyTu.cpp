#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	fflush(stdin);
	cin>>s;
	int i=0,j=n-1;
	while(i<=j){
		swap(s[i],s[j]);
		i++;
		j--;
	}
	cout<<s;
}
