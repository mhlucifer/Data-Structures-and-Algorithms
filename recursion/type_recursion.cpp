# include<iostream>
using namespace std;
//1.tail recursion 最后递归，返回期间不会做任何操作，时间复杂度 n 
//2.head recursion 先递归，返回期间执行所有操作，时间复杂度 n
//3.tree recursion 树递归，和线性递归的区别在于，线性递归只调用一次，树调用是调用自己的次数大于1
//4.indirect recursion  指的是两个函数相互调用
//5.nested recursion  函数作为函数的参数调用 ，func(func(n -1))
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


void func_tree(int n)//树递归，调用2的n-1次方 - 1   =  2的o + 2的1 + 2的2 + 2 的n-1，时间复杂度2的n次方，空间复杂度n
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