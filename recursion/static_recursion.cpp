# include<iostream>
using namespace std;
int func(int n)
{
	static int x = 0;//静态变量，只会创建一次
	if (n > 0)
	{
		x++;
		return func(n - 1) + x;
	}
	return 0;
}

int func1(int n)
{
	if (n > 0)
	{
		return func1(n - 1) + n;
	}
	return 0;
}
int main()
{
	int a = 5;
	printf("%d\n", func1(a));
	printf("%d", func(a));
}