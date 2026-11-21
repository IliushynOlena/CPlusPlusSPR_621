#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	//ostream cout;
	//istream cin;
	//ofstream f_out;//write to file
	//f_out.open("test.txt", ios_base::out);

	/////cout << "Hello";
	//f_out << "Hello"<< endl;
	//f_out << "Hello" << endl;
	//f_out << "Hello" << endl;
	//f_out << "Hello" << endl;
	//f_out.close();

	ofstream out("File22.txt", ios_base::app);
	if (out.is_open())
	{
		out << "Hello world" << endl;
	}
	else
	{
		cout << "File not exist" << endl;
	}
	out.close();



	char buff[250];
	//ifstream in;//read file
	//in.open("File22.txt", ios_base::in);

	ifstream in("File22.txt", ios_base::in);

	if (in.is_open())
	{
		//cin >> buff;
		//in >> buff; //- read before whitespace
		//in.getline(buff, 250);//read all line 
		while (!in.eof())
		{
			in.getline(buff, 250);
	     	cout << buff << endl;
		}
	}
	else
	{
		cout << "File not exist" << endl;
	}

	
	in.close();
	//work.txt
	//image.png
	//Source.cpp
	//example.py
	//index.html
   
}

