# include<iostream>
using namespace std;
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
		return factorial(n - 1) * n;
}
int main()
{
	int a = 5;
	a = factorial(4);
	cout << a << endl;
}	