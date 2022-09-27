/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-02 21:40:07
 * @LastEditTime: 2022-08-02 21:45:02
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
int n,m;
queue<int> q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    int num = 1;
    for(int i = 1;i <= n;i ++)
        q.push(i);
    while(!q.empty()){
        if(num == m){
            cout << q.front() << " ";
            q.pop();
            num = 1;
        }
        else{
            num++;
            q.push(q.front());//еежа╤сн╡
            q.pop();
        }
    }
    return 0;
}