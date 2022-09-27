/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-05 18:17:11
 * @LastEditTime: 2022-08-05 18:24:47
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
int n;
int a[N];
LL ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> n;
    for(int i = 1;i <= n;i ++)
        cin >> a[i];
    ans = 1;
    sort(a + 1,a + 1 + n);
    for(int i = 1;i <= n;i ++){
        ans = ans * (a[i] - i + 1);
        ans = ans % mod;
    }
    cout << ans << endl;

    return 0;
}