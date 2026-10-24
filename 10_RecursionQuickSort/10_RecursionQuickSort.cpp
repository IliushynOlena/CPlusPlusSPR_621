#include <iostream>
using namespace std;

void Foo(int a)
{
	if (a < 0)
		return;// break;
	cout << "Hello : a = " << a << endl;
	a--;
	Foo(a);
}
int Summa(int arr[], int size)
{
	int summa = 0;
	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}
	return summa;
}
int SummaRecursion(int arr[], int size, int index)
{
	if (index == size - 1)
		return arr[index];
	// 1 + 2 + 3 + 4 + 5
	return arr[index] + SummaRecursion(arr, size, index + 1);
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
		cout << arr[i] << " ";
	}
	cout << endl;
}
void QuickSort(int arr[], int size, int B, int E)
{
	int i = B, j = E;
	int temp, p;
	p = arr[(B + E) / 2];
	do
	{
		while (arr[i] < p)i++;
		while (arr[j] > p) j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}

	} while (i <= j);
	if (B < j)QuickSort(arr, size, B, j);
	if (i < E)QuickSort(arr, size, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
	int B = 0, E = size - 1;
	while (true)
	{
		int p = (B + E) / 2;
		if (key > arr[p])
		{
			B = p + 1;
		}
		else if (key < arr[p])
		{
			E = p - 1;
		}
		else if (key == arr[p])
			return p;

		if (B > E)return -1;
	}
}
int main()
{
	//const int size = 5;
	//int arr[size] = { 1,2,3,4,5 };
	//cout << "Summa = " << Summa(arr,size) << endl;
	//cout << "Summa = " << SummaRecursion(arr, size, 0) << endl;;
	const int size = 15;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	QuickSort(arr, size, 0, size - 1);
	ShowArray(arr, size);

	int search_key, index_search;
	cout << "Enter seacrh key : "; cin >> search_key;
	index_search = BinarySearch(arr, size, search_key);
	if (index_search != -1) {
		cout << "Element " << search_key << " found in index ["
			<< index_search << "]" << endl;
	}
	else
		cout << "Element not found" << endl;



	/*int a = 5;
	Foo(a);
	cout << Foo << endl;*/
}

