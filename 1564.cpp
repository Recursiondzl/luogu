/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-09 23:25:49
 * @LastEditTime: 2022-08-09 23:39:36
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
int n,m;
int sum[N];
int dp[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    fill(dp + 1,dp + 1 + n,INF); 
    for(int i = 1;i <= n;i ++){
        int x;
        cin >> x;
        if(x == 1)
            sum[i] = sum[i - 1] + 1;
        else
            sum[i] = sum[i - 1] - 1;
    }
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= i;j ++)
            if(abs(sum[i] - sum[j - 1] )==i - j + 1||abs(sum[i]- sum[j - 1]) <= m)
                dp[i] = min(dp[i],dp[j - 1] + 1);
    cout << dp[n] << endl;


    return 0;
}