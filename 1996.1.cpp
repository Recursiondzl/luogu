/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-02 20:21:04
 * @LastEditTime: 2022-08-02 21:29:25
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
int n,m;
bool a[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;

    int pos = 0;
    cin >> n >> m;
    for(int i = 1;i <= n;i ++){
        for(int j = 1;j <= m; j++){
            pos ++;
            if(pos> n)
                pos = 1;
            if(a[pos]==1){
                j--;
            }
        }
        cout << pos << " ";
        a[pos] = 1;
    }

    return 0;
}