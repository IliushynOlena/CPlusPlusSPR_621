
#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;



void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


int main()
{
	
	double x = -5, y = 2.7, z = 3.14;
	cout << left<< setw(5)<< x << endl;
	cout << setw(5) << y << endl;
	cout << setw(5) << z << endl;
	for (int i = 0; i < 15; i++)
	{
		SetColor(i);
		cout << "Hello world" << endl;
	}

	SetColor(4); cout << "Hello world" << endl; SetColor(7);
	SetPos(5, 5); cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	Sleep(1000);
	system("cls");
	/*for (int i = 0; i < 100; i++)
	{
		SetColor(rand() % 15);
		SetPos(rand() % 50, rand() % 50);
		Sleep(500);
		cout << "*";
	}*/

	for (int i = 0; i < 255; i++)
	{
		cout << "[" << i << "] - " << (char)i << endl;
	}
}

