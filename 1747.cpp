/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-05 17:14:56
 * @LastEditTime: 2022-08-05 17:46:48
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
int x1;
int y;
int x2,y2;
int ans1,ans2;

struct node{
	int x,y;
	int s;
};
//棋盘上一个点定为一个整体，x y为坐标，s为到这点所需最短步数
int dx[12]={2,2,-2,-2,-1,-1,1,1,-2,-2,2,2};
int dy[12]={2,-2,2,-2,-2,2,-2,2,1,-1,1,-1};
bool b[1000][1000];
queue<node> q;
int bfs(int x,int y){
    while(!q.empty()) q.pop();
    node a;
    a.x = x;
    a.y = y;
    a.s = 0;
    q.push(a);
    while(!q.empty()){
        a = q.front();
        q.pop();
        for(int i = 0;i < 12;i ++){
            node c;
            c.x = a.x + dx[i];
            c.y = a.y + dy[i];
            if(c.x >= 1&&c.y >= 1&& b[c.x][c.y] == 0){
                if(c.x == 1&&c.y==1)
                    return c.s;
                 b[c.x][c.y] = 1;
                c.s = a.s + 1;
                q.push(c);
            }
        }
    }   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> x1 >> y;
    cin >> x2 >> y2;

    ans1 = bfs(x1,y);
    memset(b,0,sizeof(b));
    ans2 = bfs(x2,y2);

    cout << ans1 << endl << ans2;
    return 0;
}