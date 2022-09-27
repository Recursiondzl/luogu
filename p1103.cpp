/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-04 19:24:40
 * @LastEditTime: 2022-08-04 21:00:34
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e3+7;
int dp[N][N];
//f[i][j]：以i作末尾，选了j本书时的最小花费
struct node{
    int w;
    int h;
}a[N];
bool cmp(node x,node y){
    if(x.h<y.h)
        return true;
    return false;
}
int n ,m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(dp,INF,sizeof(dp));
    cin >> n >> m;
    m = n - m;
    for(int i = 1;i <= n;i ++)
        cin >> a[i].h >> a[i].w;
    
    sort(a + 1,a + 1 + n,cmp);

    for(int i = 1;i <= n;i ++)
        dp[i][1] = 0;
    
    for(int i = 2;i <= n;i ++)
        for(int j = 1;j <= i - 1;j ++)
            for(int l = 2;l <= min(i,m);l++)
                dp[i][l] = min(dp[i][l],dp[j][l - 1] + abs(a[i].w - a[j].w));
    int ans = INF;
    for(int i = m;i <= n;i ++)
        ans = min(ans,dp[i][m]);
    cout << ans << endl;
    return 0;
}