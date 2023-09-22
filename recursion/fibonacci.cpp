# include<iostream>
using namespace std;
//斐波那契数列,	时间复杂度为2的n次方
int fico(int n)
{
	if (n <= 1)
		return n;
	
	else
	return fico(n - 2) + fico(n - 1); //3返回1
}//这种方法是过度递归，因为他会多次调用自己

//优化结果

#include <vector>
#include <iostream>

int fib(int n) {
	static std::vector<int> f(n + 1, -1); // 动态数组，大小为 n + 1，所有元素初始化为 -1

	if (n <= 1) {
		f[n] = n;
		return n;
	}

	if (f[n - 2] == -1 && n - 2 >= 0) { // 检查 n - 2 >= 0
		f[n - 2] = fib(n - 2);
	}

	if (f[n - 1] == -1) {
		f[n - 1] = fib(n - 1);
	}

	return f[n - 2] + f[n - 1];
}


int main()
{
	int a,b= 5;
	a = fico(5);
	cout << a << endl;
	int t0 = 0,t1 = 1,s, i,n = 5;
	if (n <= 1)return n;
	for(i = 2;i <= n; i++)
	{
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	cout << s << endl;

	std::cout << fib(10); // 输出 55

}