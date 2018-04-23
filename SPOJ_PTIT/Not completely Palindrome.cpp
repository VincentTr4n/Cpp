#include<iostream>
using namespace std;


int main(){
	int T = 0;
	cin>>T;
	for(int t=0;t<T;t++){
		string s;
		fflush(stdin);
		getline(cin,s);
		int c[26];
		for(int i=0;i<26;i++) c[i] = 0;
		for(int i=0;i<s.length();i++) c[s[i]-'a']++;
		int odd = 0;
		for(int i=0;i<26;i++) if(c[i]>0 && c[i]%2!=0) odd++;
		if(s.length()%2==0){
			if(odd==0 || odd==2) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}else{
			if(odd==1 || odd==3) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
