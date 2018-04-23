#include<iostream>
#include<map>
using namespace std;


int main(){
	map<int,int> m;
	string s;
	int max=0,temp=0;
	fflush(stdin);
	cin>>s;
	for(int i=0;i<s.length()-1;i++){
		temp+=(s[i]=='X'?1:-1);
		if(m.find(temp)==m.end()) m[temp]=i;
		else if(max<i-m[temp]) max=i-m[temp];
	}
	cout<<max<<endl;
}
