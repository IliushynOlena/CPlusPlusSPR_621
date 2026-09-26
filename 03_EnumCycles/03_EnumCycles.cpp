#include <iostream>
using namespace std;

int main()
{

	/* const int USA = 1;
	 const int Ukraine = 380;
	 const int France = 33;
	 const int Italy = 39;
	 const int Australia = 61;*/

	 //enum (const int) = це набір іменованих цілочисельних констант.

	 //enum countries{ USA = 1 , Ukraine = 380, France = 33, Italy = 39,
	 //    Australia = 61    };

	 //cout << "Code Ukraine : " << Ukraine << endl;
	 //const int penny = 1;
	 //const int nickel = 5;
	 //const int dime = 10;
	 //const int quarter = 25;
	 //const int half = 50;
	 //const int dollar_coin = 100;
	 //enum{penny = 1, nickel = 5, dime = 10, quarter = 25, half = 50,
	 //dollar_coin = 100};
	 //enum genre{Drama=10, Epos, Lirica, Comedy=1, Novel, Fantasy};
	 //enum Category{Vagitables, Milk, Meat, Bakery};
	 //const int pi = 3.14;

	 //genre genre;
	 //genre = Drama;
	 //genre = Epos;
	 //genre = Comedy;
	 //genre = Novel;
	 ////Book author pages publisher  title  genre
	 ////coins c = nickel;
	 //int a;// -2 147 486 586   + 2 147 548 688
	 //int coin;
	 //cout << "Enter value of American coin : ";
	 //cin >> coin;
	 ////case int   case char
	 //switch (coin)//25
	 //{
	 //case penny:cout << "penny = 1 coin" << endl; break;
	 //case nickel:cout << "nickel = 5 coin" << endl;break;
	 //case dime:cout << "dime = 10 coin" << endl;break;
	 //case quarter:cout << "quarter = 25 coin" << endl;break;
	 //case half:cout << "half = 50 coin" << endl;break;
	 //case dollar_coin:cout << "dollar_coin = 100 coin" << endl;break;
	 //default:cout << "No coin" << endl;     break;
	 //}


	 //У мові С++ є кілька реалізацій такої форми, як цикл :
	 //■ Цикл з передумовою(while);
	 //■ Цикл з постумовою(do...while);
	 //■ Цикл з параметрами(for).
	/*
	int i = 0;
	while (i <= 10)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;
	int c = 0;
	do
	{
		cout << c << " ";
		c++;
	} while (c <= 10);
	cout << endl;

	for (int i = 0; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;


	float a, b, res;
	int new_key;
	do
	{
		cout << "Choose the operation : " << endl;
		cout << " [1] - add numbers " << endl;
		cout << " [2] - sub numbers " << endl;
		cout << " [3] - multy numbers " << endl;
		cout << " [4] - divide numbers " << endl;
		cout << " [0] - exit " << endl;
		cin >> new_key;
		cout << "Enter first number : "; cin >> a;
		cout << "Enter second number : "; cin >> b;

		switch (new_key)
		{
		default:
			cout << "Error choice" << endl;
			break;
		case 0:cout << "Have a nice day!" << endl; break;
		case 1:
			res = a + b;
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case 2:
			res = a - b;
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case 3:
			res = a * b;
			cout << a << " * " << b << " = " << a * b << endl;
			break;

		case 4:
			if (b == 0)
			{
				cout << "Error" << endl;
			}
			else {
				res = a / b;
				cout << a << " / " << b << " = " << a / b << endl;
			}
			break;

		}

	} while (new_key != 0);

	*/


	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << endl; 

	int x;
	for (x= 0; x < 11; x+=2)
	{
		cout << x << " ";
	}
	cout << endl;

	float y = 0.0f;
	for (   ; y <= 2.0f; y+=0.2f)
	{
		cout << y << " ";
	}
	cout << endl;

	for (int i = 0; i < 10;    )
	{
		cout << i << " "; 
		i++;
	}
	cout << endl;
	//НЕСКІНЧЕННИЙ ЦИКЛ. true   
	for (int i = 0; ; i++)
	{
		
		cout << i << " ";
		if (i == 10) 
		{
			break; 
		}
		
	}

	/*
	int magicNumber = 2;
	cout << "\n=======================================" << endl;
	cout << "=== My magic number between 1 and 10==" << endl;
	cout << "=======================================" << endl;
	int user = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << " ------------- Round " << i << " ----------------" << endl;
		cout << "Enter your number ---> ";
		cin >> user;

		if (user == magicNumber)
		{
			cout << "Congratulation" << endl; break;
		}
		else
		{
			cout << "That's not my number" << endl;
		}
		if (i == 5)
		{
			cout << "Try again later!" << endl;
		}

	}
	*/
	cout << endl;
	for (int i = 0; i < 25; i++)
	{
		if (i % 2 == 0)cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i < 25; i+=2)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i < 25; i++)
	{
		if (i % 2 == 1)continue;
		cout << i << " ";
	}

}

