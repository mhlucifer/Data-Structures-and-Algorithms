# include<iostream>
using namespace std;
//组合值，随机组合
int factor(int n)
{
	if (n <= 0)
		return 1;
	else
		return factor(n - 1)* n;
}
int c(int n, int r)//时间复杂度是N	
{
	int t1, t2, t3;
	t1 = factor(n);
	t2 = factor(r);
	t3 = factor(n - r);
	return t1 / (t2 * t3);
}

int c1(int n, int r)
{
	if (r == 0 || n == r)
	{
		return 1;
	}
	else
		return c(n - 1, r - 1) + c(n - 1, r);
}
int main()
{
	
}