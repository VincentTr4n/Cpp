#include<iostream>
#include<stack>
#include<String.h>
using namespace std;
typedef struct temp
{
	int num;
	bool op;
	temp(int x=0,bool y=true)
	{
		num=x;
		op=y;
	}
};
int tach(char *&x)
{
	char y[100];
	sscanf(x,"%[0-9]s",y);
	x+=strlen(y);
	int m;
	scanf(y,"%d",&m);
	return m;
}
int main()
{
	char c[1000];
	cin>>c;
	stack<temp> S;
	int t=0,k;
	for(char*p=c;*p;)
	{
		if(*p=='+'||*p=='-'||*p=='('||*p==')') S.push(temp(*p++));
		else if(*p>='0' && *p<='9')
		{
			int k = tach(p);
			if(S.top().op==true && S.top().num=='+')
			{
				S.pop();
				int q = S.top().num;
				q+=k;
				S.pop();
				S.push(temp(q,false));
			}
				if(S.top().op==true && S.top().num=='-')
			{
				S.pop();
				int q = S.top().num;
				q-=k;
				S.pop();
				S.push(temp(q,false));
			}
			else S.push(temp(k,false));
		}
		else
		{
			int q=S.top().num;
			S.pop();
			S.pop();
			if(S.top().num =='-') q=-q;
			S.pop();
			S.push(temp(q,false));
			p++; 
		}
		cout<<S.top().num;
	}
}
