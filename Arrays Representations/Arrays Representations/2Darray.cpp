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

	//row major mapping l = base + (i*col+j)*size	这里从左到右，有a[d1][d2],比如a[i][j] 就是(i * d2 + j) ，这里理解为i已经占了d1的位置，所以只剩d2。	
	//col major mapping l = base + (j*row+i)*size  这里从右到左	,有a[d1][d2],比如a[i][j] 就是(j * d1 + i) ,这里理解为j已经占了d2的位置，所以只剩d1
}