#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 0;
        int sum = 0;
        int start = -1;
        for (int i = 0; i < n; i++) {
            int val = sum + a[i];
            if (val > 0) {
                if (sum == 0) {
                    start = i;
                }
                sum = val;
            } else sum = 0;
            ans = sum>ans?sum:ans;
        }
		ans = (start == -1)?a[0]:ans;
        cout<<ans;
}
