# include<iostream>
using namespace std;
//̩�ռ�����˼·�ǲ���������֣���Ȼ���ܺͣ��׳ˣ��ݺ����ܺ�.
//double taylor(int x, int n)
//{
//	static double  p = 1, f = 1;
//	double r;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		r = taylor(x, n - 1);
//		p = p * x;
//		f = f * n;
//		return r + p / f;
//	};
//}
//�Ż�����̩�ռ���
//double quick_taylor(int x, int n)
//{
//	int s = 1;
//	for (;n > 0; n--)
//	{
//		s = 1 + x / n * s;
//	}
//}
double quick_taylor(int x, int n)
{
	static int s = 0;
	if (n == 0)
		return s;
	s = 1 + x / n * s;
	return quick_taylor(x, n - 1);
}
int main()
{
	double a = 0;
	/*a = taylor(3, 10);*/
	printf("%lf \n", a);
	
}