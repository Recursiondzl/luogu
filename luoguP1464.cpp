/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-07-06 17:01:56
 * @LastEditTime: 2022-07-06 17:11:13
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;

int x,y,z;

int dfs(int x,int y ,int z){
    if(x <= 0 or y <= 0 or z <= 0)
        return 1;
    if(x > 20 or y > 20 or z > 20)
        return dfs(20,20,20);
    if(x < y && y < z)
        return dfs(x,y,z- 1) + dfs(x,y-1,z-1)-dfs(x,y-1,z);

    return dfs(x - 1,y,z)+dfs(x-1,y-1,z)+dfs(x-1,y,z-1)-dfs(x-1,y-1,z-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while(cin >> x >> y >> z){
        if(x == -1 && y == -1 && z == -1)
            return 0;
        
        int ans = dfs(x, y, z);
        cout << "w("<<x<<", "<<y<<", "<<z<<") = "<<ans << endl;
    }
    return 0;
}