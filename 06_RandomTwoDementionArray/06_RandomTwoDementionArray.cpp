#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	srand(time(NULL));// time(0) 01.01.1970
  
	int a;
	a = rand();////0....32767
	cout << "a = " << a << endl;
	a = rand();
	cout << "a = " << a << endl;
	a = rand();
	cout << "a = " << a << endl;
	//0.....10
	//29765%10= 5   0.....9
	//4571%10 = 1
	//364%10 = 4
	//777%10= 7
	//660%10 = 0
	//559%10 = 9 
	// 560%10 = 0

	//0.....100
	// //999%100 = 99
	//789%100 = 89
	//5824%100 = 24
	//8500%100= 0
	cout << endl;
	//0......x   --> rand()%x;
	for (int i = 0; i < 10; i++)
	{
		a = rand() % 10;//0...9
		cout << a << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		a = rand() % 100;//0...99
		cout << a << " ";
	}
	// 10.....99  --> rand()%90 --> 0....88 + 10
	//a .... b  --> rand()%(b-a) + a
	cout << endl;
	for (int i = 0; i < 30; i++)
	{
		a = rand() % 90+10;//10...99
		cout << a << " ";
	}
	//-20....+20    rand() %40--> 0......39
	cout << endl;
	for (int i = 0; i < 30; i++)
	{
		a = rand() %40 - 20;
		cout << a << " ";
	}
	cout << "\n-----------Array-----------" << endl;
	const int size = 15;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << " ";
	}
	cout << endl;



	//int array1[3][3] = { {1,2,3},{4,5,6} ,{7,8,9} };
	//int array1[3][3] = { {1,2,3},{4,5,6}  };
	int array1[3][3] = { 1,2,3,4  };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array1[i][j] << " ";
		}
		cout << endl;
	}

	const int rows = 4;
	const int cols = 6;
	int array[rows][cols]{};
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			array[i][j] = rand() %40;
			//array[i][j] = rand() % 90 + 10;
			//cout <<left<< setw(5)<< array[i][j] << " ";
			cout << setw(5)<< array[i][j] << " ";
		
		}
		cout << endl;
	}
	int max = array[0][0];
	int max_row;
	for (int i = 0; i < rows; i++)
	{
		max_row = array[i][0];
		for (int j = 0; j < cols; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
			if (array[i][j] > max_row)
				max_row = array[i][j];
		}
		cout << "Max element in row : " << max_row << endl;
		cout << endl;
	}
	cout << "Max element  " << max << endl;


}

