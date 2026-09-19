#include <iostream>
using namespace std;

int main()
{
  //Оператор — конструкція мови, що дає змогу
  // виконувати різні дії над даними, 
  // що призводять до певного результату.
	// + - * / 
	// > < >= <= == !=
	//1. Унарні  (+5)   -5 ++ , --
	//2. Бінарні  + - * /  > < >= <= == !=
	//3. Тернарні 

	/*
	int a = 5, b = 7;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << 10%4<< endl;//2
	cout << 15%4<< endl;//3
	cout << 7%9<< endl;//7
	//cout << 7%0<< endl;//error

	// Інкремент (++) і декремент (--)
	cout << "a = " << a << endl;
	a = a + 1;
	cout << "a = " << a << endl;
	a += 1;
	cout << "a = " << a << endl;
	a++;//postfix form increment
	cout << "a = " << a << endl;
	++a;//prefix form increment
	cout << "a = " << a << endl;
	a = a - 1; 
	cout << "a = " << a << endl;
	a -= 1;
	cout << "a = " << a << endl;
	a--;//postfix form decrement
	cout << "a = " << a << endl;
	--a;//prefix form decrement
	cout << "a = " << a << endl;
	int c = 8;
	cout << "c = " << c << endl;//8
	cout << "c = " << c++ << endl;//9 ------------------>
	cout << "c = " << ++c << endl;//10  <--------------
	cout << "c = " << c << endl;//10


	c = c + 12;
	cout << "c = " << c << endl;
	c += 12;
	cout << "c = " << c << endl;
	c = c - 12;
	cout << "c = " << c << endl;
	c -= 12;
	cout << "c = " << c << endl;
	c = c * 12;
	cout << "c = " << c << endl;
	c *= 12;
	cout << "c = " << c << endl;
	c /= 12;
	cout << "c = " << c << endl;
	c %= 12;
	cout << "c = " << c << endl;

	//Перетворення типів   
	// 2. Розширююче перетворення.            4 294 
	unsigned int number = 3000000000;//2 147 483 586.+ 2 147 483 586
	cout << number << endl;
	//1. Звужуюче перетворення
	//1. Неявне перетворення.
	int A = 23.3;
	cout << "A = " << A << endl;

	//2. Явне перетворення 
	a = 7, b = 4;
	cout << (float)a / b << endl;//1
	//float ----> 3.33333333
	//double ----> 3.3333333333333333
	double r = 3.36;
	cout << "r = " << r << "\n";
	int res =(int) r;
	cout << "res = " << res << endl;

	bool flag = true;//1

	cout << (5 > 3) << endl;//true
	cout << (5 < 3) << endl;//false
	cout << (7==7) << endl;//true
	cout << (5!=4) << endl;//true
	cout << (1 >= 1) << endl;//true
	cout << (1 <= 7) << endl;//true
	cout << ((11 > 6) and (11 < 17) )<< endl;//true

	if (true)
	{
		//dia1;
	}
	else
	{
		//dia2;
	}
	int num1, num2, result;
	cout << "Enter number 1 : "; 
	cin >> num1;
	cout << "Enter number 2 : "; 
	cin >> num2;

	if (num2 == 0)
	{
		cout << "Can't divide by zero!" << endl;
	}
	else
	{
		result = num1 / num2;
		cout << "Res : " << num1 << " / " << num2 << " = " << result << endl;

	}
	//Тернарний оператор   (ymova)?dia1 : dia2;
	if (num2 == 0)
	{
		cout << "Error" << endl;
	}
	else
	{		
		cout << num1/num2 << endl;
	}
	/*if (num2 == 0)
		cout << "Error" << endl;
	else
		cout << num1 / num2 << endl;*/

	//(num2 == 0) ? cout << "Error" << endl : cout << num1 / num2 << endl;
	// > 100 - 5%
	// > 500 - 10%
	// > 1000 - 25%
/*
	int sum;
	cout << "Enter total summa : ";
	cin >> sum;
	if (sum >= 100 && sum < 500)//sum > 100 ...101 && sum < 500 499
	{
		cout << "You have discount 5 %" << endl;
		cout << "You have to pay : " << sum - sum * 0.05 << endl;
	}
	else if (sum >= 500 && sum < 1000)//sum > 500 ..501   999
	{
		cout << "You have discount 10 %" << endl;
		cout << "You have to pay : " << sum - sum * 0.1 << endl;
	}
	else if (sum >= 1000)
	{
		cout << "You have discount 25 %" << endl;
		cout << "You have to pay : " << sum - sum * 0.25 << endl;
	}
	else {
		cout << "You don't have discont" << endl;
		cout << "You have to pay : " << sum << endl;
	}
	*/
	float a, b, res;
	char key;//'+'   '*'   '-'
	cout << "Enter first number : "; cin >> a;
	cout << "Enter second number : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [+] - add numbers " << endl;
	cout << " [-] - sub numbers " << endl;
	cout << " [*] - multy numbers " << endl;
	cout << " [/] - divide numbers " << endl;
	cin >> key;
	if (key == '+')
	{
		res = a + b;
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (key == '-')
	{
		res = a - b;
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (key == '*')
	{
		res = a * b;
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (key == '/')
	{
		if (b == 0)
		{
			cout << "Error" << endl;
		}
		else {
			res = a / b;
			cout << a << " / " << b << " = " << a / b << endl;
		}		
	}
	else
	{
		cout << "Error choice" << endl;
	}

	/*cout << "Enter first number : "; cin >> a;
	cout << "Enter second number : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [+] - add numbers " << endl;
	cout << " [-] - sub numbers " << endl;
	cout << " [*] - multy numbers " << endl;
	cout << " [/] - divide numbers " << endl;
	cin >> key;
	switch (key)
	{
	default:
		cout << "Error choice" << endl;
		break;
	case '+':
		res = a + b;
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	case '-':
		res = a - b;
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	case '*':
		res = a * b;
		cout << a << " * " << b << " = " << a * b << endl;
		break;

	case '/':
		if (b == 0)
		{
			cout << "Error" << endl;
		}
		else {
			res = a / b;
			cout << a << " / " << b << " = " << a / b << endl;
		}
		break;
	
	}*/
	cout << "Enter first number : "; cin >> a;
	cout << "Enter second number : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [1] - add numbers " << endl;
	cout << " [2] - sub numbers " << endl;
	cout << " [3] - multy numbers " << endl;
	cout << " [4] - divide numbers " << endl;
	int new_key;
	cin >> new_key;
	switch (new_key)
	{
	default:
		cout << "Error choice" << endl;
		break;
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
	char symbol = 'a';
	char grade;
	cout << "Enter your grade as letter ";
	cin >> grade;
	switch (grade)
	{
	case 'A':case 'a':
		cout << "Excellent" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Good" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Normal" << endl;
		break;
	case 'D':
		cout << "Not bad" << endl;
		break;
	case 'E':
		cout << "Bad" << endl;
		break;
	default:
		cout << "Not grade" << endl;
		break;
	}



}




