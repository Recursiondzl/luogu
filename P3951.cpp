/*
 * @Description: To iterate is human, to recurse divine.
 * @Autor: Recursion
 * @Date: 2022-07-09 21:30:43
 * @LastEditTime: 2022-08-02 18:32:35
 */
#include<iostream>
#include<cstdio>
#include<queue>
#include<stack>
#include<cstring>
#define is ==//装b
#define isnot !=
using namespace std;
stack<int>num;//数字栈
int Num;
char Ch;
int num2;
char str[10001];//表达式
char ccty[21];//临时数组
int flag=0,i;//flag用来判断数字是否已读尽
int numa,numb;
int Makenum(){//将临时数组中的字符转化成数字的函数
	int ret=0;
	for(int i=0;i<=strlen(ccty)-1;++i){
		if(ccty[i]=='*')break;
		ret=ret*10+ccty[i]-'0';
		ccty[i]='*';//边转化边清空，省时间
	}
	return ret;//返回转化后的值
}
int main()
{
	cin>>str;//读入整个表达式
	char cha;//当前碰到的字符
	cha=str[0];
	int k=0;
	while(cha!='@'){//如果未发现结束符号，那么运行
		if(flag==0)i=0;
		if(cha>='0'&&cha<='9'){//如果是数字
			flag=1;
			ccty[i]=cha;//将它塞入临时数组中
			i++;
		}
		if(cha is '.'){//自己看上边的装b定义 
			flag=0;//数已读尽
			Num=Makenum();//转化成数字
			num.push(Num);//压入栈中
		}
		if((cha<'0'||cha>'9')&&cha isnot '.'){//装b*2
			numa=num.top();
			num.pop();
			numb=num.top();
			num.pop();//取出栈顶前两个数字
			if(cha=='+')num.push(numb+numa);//加和乘反不反无所谓
			if(cha=='-')num.push(numb-numa);//减和除就一定要反过来了
			if(cha=='*')num.push(numb*numa);
			if(cha=='/')num.push(numb/numa);
		}
		k++;
		cha=str[k];//读取下一个字符
	}
	cout<<num.top();//输出答案
}
