#include<iostream>
using namespace std;
int check(string s){
	int i=0,j=s.length()-1;
	while(i<=j){
		if(s[i]!=s[j]){
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}
int main(){
	int n,k,i=0,j;
	string s;
	cin>>n>>k;
	fflush(stdin);
	cin>>s;
	if(check(s) && k%2==0) cout<<"YES";
	else{
		j=n-1;
		while(i<=j){
			if(s[i]!=s[j]) k--;
			i++;
			j--;
		}
	}
}
