/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-07-11 23:57:31
 * @LastEditTime: 2022-07-12 00:03:34
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;

LL q;
LL l,r;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    while(q--){
        cin >> l >> r;
        LL a = (r + l);
        LL b = (r - l + 1);
        if(a %2)
            b = b/2;
        else
            a = a/2;
        LL ans;
        ans = (a%9)*(b%9);
        cout << ans%9 << endl;
    }

    return 0;
}