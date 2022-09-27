/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-07-06 17:19:39
 * @LastEditTime: 2022-07-06 17:27:57
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
LL x,y,z;

LL dp[26][26][26];
LL w(LL a,LL b,LL c){
    if(a <= 0 or b <= 0 or c <= 0)
        return 1;
    if(a > 20 or b > 20 or c > 20)
        return w(20,20,20);
    if(a <b && b < c)//情况一，每一个没有储存过的“w”值全部储存，如果有就直接调用。
	{
		if(dp[a][b][c-1] == 0)
		{
			dp[a][b][c-1] = w(a, b, c-1);
		}
		if(dp[a][b-1][c-1] == 0)
		{
			dp[a][b-1][c-1] = w(a, b-1 ,c-1);
		}
		if(dp[a][b-1][c] == 0)
		{
			dp[a][b-1][c] = w(a, b-1, c);
		}
		dp[a][b][c] = dp[a][b][c-1] + dp[a][b-1][c-1] - dp[a][b-1][c];
	}
	
	else//同上
	{
		if(dp[a-1][b][c] == 0)
		{
			dp[a-1][b][c] = w(a-1, b, c);
		}
		if(dp[a-1][b-1][c] == 0)
		{
			dp[a-1][b-1][c] = w(a-1, b-1 ,c);
		}
		if(dp[a-1][b][c-1] == 0)
		{
			dp[a-1][b][c-1] = w(a-1, b, c-1);
		}
		if(dp[a-1][b-1][c-1] == 0)
		{
			dp[a-1][b-1][c-1] = w(a-1, b-1, c-1);
		}
		dp[a][b][c] = dp[a-1][b][c] + dp[a-1][b][c-1] + dp[a-1][b-1][c] - dp[a-1][b-1][c-1];
	}
	
	
	return dp[a][b][c];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin >> x >> y >> z){
        if(x == -1 && y == -1 && z == -1)
            return 0;
        
        LL ans = w(x, y, z);
        cout << "w("<<x<<", "<<y<<", "<<z<<") = "<<ans << endl;
    }

    return 0;
}