# include<iostream>
using namespace std;
//1.tail recursion ���ݹ飬�����ڼ䲻�����κβ�����ʱ�临�Ӷ� n 
//2.head recursion �ȵݹ飬�����ڼ�ִ�����в�����ʱ�临�Ӷ� n
//3.tree recursion ���ݹ飬�����Եݹ���������ڣ����Եݹ�ֻ����һ�Σ��������ǵ����Լ��Ĵ�������1
//4.indirect recursion  ָ�������������໥����
//5.nested recursion  ������Ϊ�����Ĳ������� ��func(func(n -1))
//indirect recursion
void funcA(int n);
void funcB(int n);
int nested_func(int n)
{
	if (n > 100)
	{
		return n - 10;
	}
	else
		return nested_func(nested_func(n + 11));
}
void funcA(int n)
{
	if (n > 0)
	{
		printf("%d", n);
		funcB(n - 1);
	}
}
void funcB(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
		funcA(n/2);
	}
}


void func_tree(int n)//���ݹ飬����2��n-1�η� - 1   =  2��o + 2��1 + 2��2 + 2 ��n-1��ʱ�临�Ӷ�2��n�η����ռ临�Ӷ�n
{
	if (n > 0)
	{
		printf("%d", n);
		func_tree(n - 1);
		func_tree(n - 1);
	}
}
int main()
{
	/*func_tree(4);*/
	/*funcA(20);*/
	int a;
	a = nested_func(80);
	cout << a << endl;
}