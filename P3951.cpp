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
#define is ==//װb
#define isnot !=
using namespace std;
stack<int>num;//����ջ
int Num;
char Ch;
int num2;
char str[10001];//���ʽ
char ccty[21];//��ʱ����
int flag=0,i;//flag�����ж������Ƿ��Ѷ���
int numa,numb;
int Makenum(){//����ʱ�����е��ַ�ת�������ֵĺ���
	int ret=0;
	for(int i=0;i<=strlen(ccty)-1;++i){
		if(ccty[i]=='*')break;
		ret=ret*10+ccty[i]-'0';
		ccty[i]='*';//��ת������գ�ʡʱ��
	}
	return ret;//����ת�����ֵ
}
int main()
{
	cin>>str;//�����������ʽ
	char cha;//��ǰ�������ַ�
	cha=str[0];
	int k=0;
	while(cha!='@'){//���δ���ֽ������ţ���ô����
		if(flag==0)i=0;
		if(cha>='0'&&cha<='9'){//���������
			flag=1;
			ccty[i]=cha;//����������ʱ������
			i++;
		}
		if(cha is '.'){//�Լ����ϱߵ�װb���� 
			flag=0;//���Ѷ���
			Num=Makenum();//ת��������
			num.push(Num);//ѹ��ջ��
		}
		if((cha<'0'||cha>'9')&&cha isnot '.'){//װb*2
			numa=num.top();
			num.pop();
			numb=num.top();
			num.pop();//ȡ��ջ��ǰ��������
			if(cha=='+')num.push(numb+numa);//�Ӻͳ˷���������ν
			if(cha=='-')num.push(numb-numa);//���ͳ���һ��Ҫ��������
			if(cha=='*')num.push(numb*numa);
			if(cha=='/')num.push(numb/numa);
		}
		k++;
		cha=str[k];//��ȡ��һ���ַ�
	}
	cout<<num.top();//�����
}
