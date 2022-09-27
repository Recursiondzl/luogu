/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-07 17:03:10
 * @LastEditTime: 2022-08-07 18:00:34
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
int n,k;
int x[N];
int y[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    for(int i = 1;i <= k;i ++)
        cin >> x[i] >> y[i];
    sort(x + 1, x + 1 + k);
    sort(y + 1, y + 1 + k);

    LL sizex = unique(x + 1,x + 1 + k) - x - 1;
    LL sizey = unique(y + 1,y + 1 + k) - y - 1;

    cout << n * (sizex + sizey) - sizex*sizey << endl;



    return 0;
}