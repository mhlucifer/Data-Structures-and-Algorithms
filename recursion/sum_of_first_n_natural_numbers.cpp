# include<iostream>
using namespace std;
int sum_n_number(int n)
{
	if (n > 0)
	{
		return sum_n_number(n - 1) + n;
	}
	return 0;
}

int sum_n_number1(int n)
{
	if (n > 0)
	{
		return (n * (n+1))/2;
	}
	return 0;
}
int main()
{
	int a = 5;
	a = sum_n_number1(5);
	cout << a << endl;
}