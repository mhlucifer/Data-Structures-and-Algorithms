# include<iostream>
using namespace std;
//쳲���������,	ʱ�临�Ӷ�Ϊ2��n�η�
int fico(int n)
{
	if (n <= 1)
		return n;
	
	else
	return fico(n - 2) + fico(n - 1); //3����1
}//���ַ����ǹ��ȵݹ飬��Ϊ�����ε����Լ�

//�Ż����

#include <vector>
#include <iostream>

int fib(int n) {
	static std::vector<int> f(n + 1, -1); // ��̬���飬��СΪ n + 1������Ԫ�س�ʼ��Ϊ -1

	if (n <= 1) {
		f[n] = n;
		return n;
	}

	if (f[n - 2] == -1 && n - 2 >= 0) { // ��� n - 2 >= 0
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

	std::cout << fib(10); // ��� 55

}