#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	stack<int> s;
	queue<int> q;
	for(int i=1;i<=10;i++)
	{
		q.push(i);
		s.push(i);
	}
	while(!s.empty())
	{
		int x = s.top();
		s.pop();
		cout<<x<<"\n";
	}
	cout<<"\nQueuen\n";
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		cout<<x<<"\n";
	}	
	return 0;
}
