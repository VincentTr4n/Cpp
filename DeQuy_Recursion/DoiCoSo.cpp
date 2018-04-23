#include<iostream>
#include<stack>
// Cho m thuoc Z+ doi sang co so b 2<=b<=16;
using namespace std;
int main()
{
	char hex[] = "0123456789abcdef";
	stack<char> S;
	int m,b;
	cin>>m>>b;
	while(m>0)
	{
		S.push(hex[m%b]);
		m=m/b;
	}
	while(!S.empty())
	{
		cout<<S.top();
		S.pop();
	}
}

