# include<iostream>
# include<stdlib.h>
using namespace std;
int main()
{
	int a[3][3] = { {1,2,3},{3,4,5},{4,5,7} };
	int* b[3];
	b[0] = new int[3];
	b[1] = new int[3];
	b[2] = new int[3];
	int** c;
	c =new int* [3];
	c[0] = new int[3];
    c[1] = new int[3];	
	return 0;	

	//row major mapping l = base + (i*col+j)*size	��������ң���a[d1][d2],����a[i][j] ����(i * d2 + j) ���������Ϊi�Ѿ�ռ��d1��λ�ã�����ֻʣd2��	
	//col major mapping l = base + (j*row+i)*size  ������ҵ���	,��a[d1][d2],����a[i][j] ����(j * d1 + i) ,�������Ϊj�Ѿ�ռ��d2��λ�ã�����ֻʣd1
}