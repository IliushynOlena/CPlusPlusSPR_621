#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char symbol = 'y';
	//C-style rows
	//string

	char word[] = { 'H','e','l','l','o','!','\0'};
	for (int i = 0; i < 6; i++)
	{
		cout << word[i];
	}
	cout << endl;

	char mystring[] = "string";
	cout << mystring << endl;

	for (int i = 0; i < sizeof(mystring); i++)
	{
		cout << static_cast<int>(mystring[i]) << " ";
	}
	cout << endl;

	char name[15] = "Max";//Max\0
	cout << "My name is " << name << endl;


	//int number;
	//cout << "Enter number : "; cin >> number;


	//cin.ignore();
	//char your_name[255];
	//cout << "Enter your name : ";
	////cin >> your_name;
	//cin.getline(your_name, 255);
	//cout << "Your name  is : " << your_name << endl;

	char text[] = "Print this!";
	char dest[50];

	strcpy_s(dest, text);
	cout << dest << endl;



	_getch();
	char arr[255] = "Returns the head of a list.";
	cout << arr << endl;
	//cout << "Enter text : "; cin >> arr;
	//cout << "Enter text : "; cin.getline(arr,255);
	cout << arr << endl;
	_strupr_s(arr);
	cout << arr << endl;
	_strlwr_s(arr);
	cout << arr << endl;

	_strrev(arr);
	cout << arr << endl;
	_strrev(arr);
	cout << arr << endl;
	_getch();
	cout << "Copy arrays : " << endl;
	char arr2[255];
	strcpy_s(arr2, arr);
	cout << arr2 << endl;
	arr2[5] = '\0';
	cout << arr2 << endl;

	cout << "Add to array " << endl;
	strcat_s(arr, "......");
	cout << arr << endl;
	//cout << "Enter text : "; cin >> arr2;
	strcat_s(arr, arr2);
	cout << arr << endl;

	char someText[] = "White123";
	someText[2] == 'A';

	// letter or number
	cout << someText[0] << " -----> " << isalnum(someText[0]) << endl;
	cout << someText[5] << " -----> " << (bool)isalnum(someText[5]) << endl;

	// letter 
	cout << someText[0] << " -----> " << (bool)isalpha(someText[0]) << endl;
	cout << someText[5] << " -----> " << (bool)isalpha(someText[5]) << endl;


	// symbol is number 
	cout << someText[0] << " -----> " << (bool)isdigit(someText[0]) << endl;
	cout << someText[5] << " -----> " << (bool)isdigit(someText[5]) << endl;


	//space
	cout << someText[0] << " -----> " << (bool)isspace(someText[0]) << endl;
	cout << someText[5] << " -----> " << (bool)isspace(someText[5]) << endl;

	//big letter
	cout << someText[0] << " -----> " << (bool)isupper(someText[0]) << endl;
	cout << someText[5] << " -----> " << (bool)isupper(someText[5]) << endl;

	//small letter
	cout << someText[0] << " -----> " << (bool)islower(someText[0]) << endl;
	cout << someText[5] << " -----> " << (bool)islower(someText[5]) << endl;


	cout << someText[0] << " -----> " << (char)tolower(someText[0]) << endl;
	cout << someText[1] << " -----> " << (char)toupper(someText[1]) << endl;


}

