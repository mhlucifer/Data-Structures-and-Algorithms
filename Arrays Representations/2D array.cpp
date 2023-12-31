# include<iostream>
using namespace std;
int main()
{
	/*

		1. * *如果`int*`后面跟的是变量名 * *，例如：
		```cpp
		int* p;
	```
		这时候，`p` 是一个指向 `int` 类型的指针。

		2. * *如果`int*`是数组的一部分 * *，例如：
		```cpp
		int* arr[10];
	```
		这时候，`arr` 是一个指针数组，数组的每个元素都是指向 `int` 类型的指针。

		3. * *如果`int*`是在括号中与数组变量一起出现 * *，例如：
		```cpp
		int(*p)[10];
	```
		这时候，`p` 是一个指向包含10个 `int` 的数组的指针，即数组指针。

		所以，`int*` 后面跟的是什么，以及它和其他符号的组合，会决定它具体表示的是哪一种类型。*/
	//1
	int A[3][4] = { {1,2,3,4},{3,4,5,7},{2,3,6,8} };
	
	//2,适用于知道行但不知道列，数组的数组
	int* B[3];
	B[0]= new int[4];
	B[1] = new int[5];
	B[2] = new int[3];
	//3适用于都不知道的情况，指针的指针
	int** C;
	C = new int*[3];//指针指向存放三个指针的数组
	C[0] = new int[4];
	C[1] = new int[4];
	C[2] = new int[4];

}