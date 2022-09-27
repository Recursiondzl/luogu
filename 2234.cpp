/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-07 15:06:11
 * @LastEditTime: 2022-08-07 15:33:21
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
struct node{
    int day;
    int num;
}a[N];
bool cmp(node x,node y){
    if(x.num < y .num)
        return true;
    return false;
}
int n;

int check(int i){
    int p = INF;
    int q = INF;
    if(a[i].day == 1)
        return a[i].num;
    for(int j = i - 1;j >= 1;j --){
        if(a[j].day < a[i].day){
            p = abs(a[j].num - a[i].num);
            break;
        }
    }
    for(int j = i + 1;j <= n;j ++){
        if(a[j].day < a[i].day){
            q = abs(a[j].num - a[i].num);
            break;
        }
    }
    return min(p,q);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1;i <= n;i ++){
        a[i].day = i;
        int x;
        cin >> x;
        a[i].num = x;
    }

    sort(a + 1, a + 1 + n,cmp);

    int ans = 0;
    for(int i = 1;i <= n;i ++){
        ans += check(i);
    }
    cout << ans << endl;
    
    return 0;
}