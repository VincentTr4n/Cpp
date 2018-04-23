#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
	long n,a[1000006],m;
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	queue<long> Q;
	long long k = 0;
	for(long i=n;i>=1;i--)
	{
		if(Q.empty() || Q.front() < a[i])
		{
			k+=a[i];
			Q.push(a[i]-m);
		}
		else
		{
			Q.pop();
			Q.push(a[i]-m);
		}
	}
	cout<<k;
}
