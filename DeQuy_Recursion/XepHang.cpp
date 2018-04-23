#include<iostream>
#include<stack>
using namespace std;
typedef struct data{
	int x;
	int f;
};

int main()
{
	long long k=0;
	int n,x;
	stack<data> s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(!s.empty() && s.top().x<x)
		{
			k+=s.top().f;
			s.pop();
		}
		if(!s.empty() && x == s.top().x){
			k+= ++s.top().f;
			data d = s.top(); s.pop();
			if(s.empty()) k--;
			s.push(d);
		}
		else
		{
			k+=s.empty()?0:1;
			data d ; d.x = x;
					 d.f = 1;
			s.push(d);
		}
	}
	cout<<k<<"\n";
	//cout<<k;	
}

