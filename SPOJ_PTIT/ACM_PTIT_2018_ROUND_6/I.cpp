#include <bits/stdc++.h>
#include <numeric>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define FORD(i,a,b) for(i=b;i>=a;i--)
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
ll i,j;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int arr[n];
    int res[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = (int)s[i]%48;
        
        if(i==0)
            res[0]=arr[0];
        else if(i<k)
            res[i]=arr[i]^arr[i-1];
        else
            res[i]=arr[i]^arr[i-1]^res[i-k];
        
        printf("%d",res[i]);
        
    }    
	
	
	return 0;
}
