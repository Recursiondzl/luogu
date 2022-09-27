/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-08-02 18:17:15
 * @LastEditTime: 2022-08-02 18:39:47
 */
#include <bits/stdc++.h>
#define LL long long 
using namespace std;
const int maxn = 1e6 + 10;
const int mod = 1e9 + 7;
const int INF = 1e9 + 10;
const int N = 1e6;
string s;
int a,b;
int n,m;
stack<int> q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '@')
            break;
        else if(s[i] == '.'){
            q.push(a);
            a = 0;
            b = 0;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            a = b * 10 + s[i] - '0';
            b = a;
        }
        else{
            if(s[i] == '+'){
                n = q.top();
                q.pop();

                m = q.top();
                q.pop();
                
                q.push(m + n);
            }
            if(s[i] == '-'){
                n = q.top();
                q.pop();

                m = q.top();
                q.pop();
                
                q.push(m - n);
            }
            if(s[i] == '*'){
                n = q.top();
                q.pop();

                m = q.top();
                q.pop();
                
                q.push(m * n);
            }
            if(s[i] == '/'){
                n = q.top();
                q.pop();

                m = q.top();
                q.pop();
                
                q.push(m / n);
            }
        }
    }

    cout << q.top() << endl;



    return 0;
}