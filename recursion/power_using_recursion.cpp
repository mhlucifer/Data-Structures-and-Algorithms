# include<iostream>
using namespace std;
int exponment(int m, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
		return exponment(m, n - 1)* m;
}
int quick_exp(int m,int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n % 2 == 0)
		return quick_exp(m * m, n / 2);
	else
		return m * quick_exp(m * m, (n - 1) / 2);
}

int main()
{
	int a;
	a = quick_exp(2, 9);
	cout << a << endl;
}