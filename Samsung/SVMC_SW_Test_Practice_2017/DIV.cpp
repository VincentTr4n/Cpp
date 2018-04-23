#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,a,b) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,0,n-1)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pi>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;

 
const int MAX = 1e6;
int a[MAX+7] ;
vi primes[MAX+7] ;
 
void sieve()
{
    REP(i,1,MAX) for(int j=i;j<=MAX;j+=i) a[j]++;
    REP(i,2,MAX)
    if(primes[i].size()==0)  for(int j=i;j<=MAX;j+=i) primes[j].add(i);
}
 
int main()
{ 
    sieve();
 	int cnt = 0;
    REP(i,1,MAX)
    {
        int x = a[i] ;
        if(primes[x].size()==2 && primes[x][0]*primes[x][1]==x)
        {
            cnt++;
            if(cnt%9==0) printf("%d\n",i);
        }
    }
 
    return 0;
}
