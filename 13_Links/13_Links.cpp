#include <iostream>
using namespace std;
#define MONTH 12

void ChangeValue(int &a)
{
	a++;
}
int& FindMax(int& a, int& b)//5    7
{
	/*int c = 4;
	return c;*/


	if (a > b)return a;///11
	else return b;//7
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{

		*(arr + i) = rand() % 50;
	}
}
void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int& FindMaxInArray(int* arr, int size)
{
	int max = arr[0];
	int maxIndex = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > max) {
			max = *(arr + i);
			maxIndex = i;
		}
	}
	return arr[maxIndex];
}
int main()
{

	srand(time(0));
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);


	int max = FindMaxInArray(arr, size);
	cout << "Max element : " << max << endl;
	//*max = 1000;
	max += 10;
	ShowArray(arr, size);
	FindMaxInArray(arr, size) += 10;
	ShowArray(arr, size);



	/*
	const int month = 12;
	int a = 10;
	int b = 7;
	cout << "a = " << a << endl;
	ChangeValue(a);
	cout << "a = " << a << endl;


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int max = FindMax(a, b);
	cout << "max = " << max << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	FindMax(a, b) =  100;
	cout << "max = " << max << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;



	//int* pa = &a;
	int* pa = nullptr;//empty 
	pa = &a;

	//Links
	int& la = a;
	
	//int& lb;
	//lb = b;
	int& lb = b;
	int* pb = &b;
	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "la = " << la << endl;
	cout << a + b << endl;
	cout << *pa + *pb << endl;
	cout << la + lb << endl;
	*/

}

