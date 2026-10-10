#include <iostream>
using namespace std;
void Hello();//prototype function

void Star(int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "* ";
	}
	cout << endl;
}
void AnyLine(char symbol, int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << symbol << " ";
	}
	cout << endl;
}

int MyPow(int number, int step)
{
	int pow = 1;
	for (int i = 0; i < step; i++)
	{
		pow *= number;
	}
	//cout << "Pow = " << pow << endl;
	return pow;
}
int Max(int a, int b)
{
	/*if (a > b)
		return a;
	else
		return b;*/
	return (a > b) ?  a :  b;
}
int Min(int a, int b)
{
	return (a < b) ? a : b;
}
void Second()
{
	cout << "\nSecond function\n";
}
void First() 
{ 
	cout << "\nBegin first function\n";    
	Second();
	cout << "\nEnd first function\n"; 
}
void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i] << " ";
	}
}
int SummaArray(int arr[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	return summa;
}
void InitTwoArray(int arr[][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 90 + 10;
		}
	}
}
void ShowTwoArray(int arr[][10], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<< arr[i][j] <<" ";
		}
		cout << endl;
	}
}
int SummaTwoArray(int arr[][10], int rows, int cols)
{
	int summa = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			summa += arr[i][j] ;
		}
	}
	return summa;
}

int main()
{
	const int rows = 5;
	const int cols = 10;
	int mass[rows][cols];
	InitTwoArray(mass, rows, cols);
	ShowTwoArray(mass, rows, cols);
	cout << "Suma = " << SummaTwoArray(mass, rows, cols) << endl;;

	const int size = 100;
	int arr[size]{};
	InitArray(arr, size);
	ShowArray(arr, size);
	cout << "Summa array = " << SummaArray(arr, size) << endl;
	First();
	cout << Max(7, 19) << endl;
	cout << Max(71, 9) << endl;
	cout << Min(7, 19) << endl;
	cout << Min(71, 9) << endl;
	cout << MyPow(7, 3) << endl;
	int res = MyPow(7, 3);
	cout << "Res = " << res << endl;
	AnyLine('@', 65 );
	AnyLine('+',97);
	AnyLine('=',24);
	Hello();
	Hello();
	Hello();
	Star(5);
	Star(10);
	Star(15);


}
void Hello()
{
	cout << "Hello" << endl;

}