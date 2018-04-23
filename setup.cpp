#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n+4];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    system("pause");
    return 0;
}