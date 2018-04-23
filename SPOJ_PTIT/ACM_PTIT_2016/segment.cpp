#include <bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n-1)
#define FORD(i,b,a) for(int i=b;i>=a;i--)
#define ford(i,n) FORD(i,n-1,0)
#define sqr(x) ((x)*(x))
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<ii>
#define vll vector<ll>
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define add push_back
#define len(arr) arr.size()
#define print(x) cout<<(x)<<endl
using namespace std;

#define MAX 300003
#define N 1000006
int tree[MAX] = {}, vis[N] = {}, a[MAX];
pair <int, pi> buffer[MAX];
 
void update(int i, int val)
{
    while(i < MAX)
    {
        tree[i] += val;
        i += (i & -i);
    }
}
 
int SUM(int i)
{
    int sum = 0;
    while(i > 0)
    {
        sum += tree[i];
        i -= (i & -i);
    }
    return sum;
}

 
int main()
{
	SPEED;
    int n, q, x;
    cin >> n;
    REP(i,1,n) cin>>a[i];
    cin >> q;
    rep(i,q)
    {
       	cin>>buffer[i].se.fi>>buffer[i].fi;
        buffer[i].se.se = i;
    }
    sort(buffer, buffer + q);
    
    int res[q+3];
    x = 0;
    REP(i,1,n)
    {
        if(vis[a[i]]!=0) update(vis[a[i]], -1);
        vis[a[i]] = i;
        update(i, 1);
        while(x < q)
        {
        	if(buffer[x].fi != i) break;
            res[buffer[x].se.se] = SUM(buffer[x].fi) - SUM(buffer[x].se.fi-1);
            x++;
        }
    }
    REP(i,1,n) cout<<tree[i]<<" ";
    rep(i,q) print(res[i]);
    return 0;
}
