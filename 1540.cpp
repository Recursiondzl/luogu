/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-04 01:59:07
 * @LastEditTime: 2022-08-04 02:11:37
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
vector <int> v;
int n,m;
int a[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    int t;
    int ans = 0;
    for(int i = 1;i <= n;i ++){
        cin >> t;
        if (std::find(v.begin(), v.end(), t) == v.end()) { 
			v.push_back(t);
			++ans;
		}
		if (v.size() > m)
			v.erase(v.begin()); 
    }

    cout << ans << endl;

    return 0;
}