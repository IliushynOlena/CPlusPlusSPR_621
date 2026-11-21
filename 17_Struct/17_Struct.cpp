#include <iostream>
using namespace std;

struct User
{
	char nick[100];
	char password[100];
	char email[100];
	int age;
	int score;
};

struct Date
{
	int day;
	int month;
	int year;
	char month_name[10];
};

struct Worker
{
	char name[50];
	char surname[50];
	int salary;
	char position[20];
	Date birthdate;
	Date hiredate;

};
//Worker Init(Worker worker)
//{
//	cout << "Enter name : "; cin >> worker.name;
//	cout << "Enter surname : "; cin >> worker.surname;
//	cout << "Enter salary : "; cin >> worker.salary;
//	cout << "Enter position : "; cin >> worker.position;
//	cout << "Enter birthdate day  : "; cin >> worker.birthdate.day;
//	cout << "Enter birthdate month  : "; cin >> worker.birthdate.month;
//	cout << "Enter birthdate year  : "; cin >> worker.birthdate.year;
//	cout << "Enter hiredate day  : "; cin >> worker.hiredate.day;
//	cout << "Enter hiredate month  : "; cin >> worker.hiredate.month;
//	cout << "Enter hiredate year  : "; cin >> worker.hiredate.year;
//	return worker;
//}

void Init(Worker &worker)
{
	cout << "Enter name : "; cin >> worker.name;
	cout << "Enter surname : "; cin >> worker.surname;
	cout << "Enter salary : "; cin >> worker.salary;
	cout << "Enter position : "; cin >> worker.position;
	cout << "Enter birthdate day  : "; cin >> worker.birthdate.day;
	cout << "Enter birthdate month  : "; cin >> worker.birthdate.month;
	cout << "Enter birthdate year  : "; cin >> worker.birthdate.year;
	cout << "Enter hiredate day  : "; cin >> worker.hiredate.day;
	cout << "Enter hiredate month  : "; cin >> worker.hiredate.month;
	cout << "Enter hiredate year  : "; cin >> worker.hiredate.year;
}
void Show(Worker &worker)
{
	cout << "Name : " << worker.name << endl;
	cout << "Surname : " << worker.surname << endl;
	cout << "Salary : " << worker.salary << endl;
	cout << "Position : " << worker.position << endl;
	cout << "Birthday : " << worker.birthdate.day << "/" <<
		worker.birthdate.month << "/" <<
		worker.birthdate.year << "/" << endl;
	cout << "Hiredate : " << worker.hiredate.day << "/" <<
		worker.hiredate.month << "/" <<
		worker.hiredate.year << "/" << endl;
}

int main()
{
	Worker Nick = { "Nick","Surname",2000,"manager",{1,1,2001},{5,5,2025} };
	Show(Nick);
	//Nick = Init(Nick);
	Init(Nick);
	Show(Nick);


	Date day = { 1,1,2001,"January" };

	Date *day_ptr = nullptr;
	

	cout << day.day << endl;
	cout << day.month << endl;
	cout << day.year << endl;
	cout << day.month_name << endl;

	day_ptr = &day;
	cout << (*day_ptr).day << endl;
	cout << day_ptr->day << endl;
	cout << day_ptr->month << endl;
	cout << day_ptr->year << endl;
	cout << day_ptr->month_name << endl;

	Date newDay;
	newDay = day;
	cout << newDay.day << endl;
	cout << newDay.month << endl;
	cout << newDay.year << endl;
	cout << newDay.month_name << endl;


	int a = 5;

	int arr[10] = { 1,2,3,4,55,33,7,8,9,8};

	Date birthday = { 12,12,2000,"December" };

	cout << "a = " << a << endl;

	cout << "________________ My birthday ___________________" << endl;
	cout << "Day : "<<  birthday.day << endl;
	cout << "Month : "<<  birthday.month << endl;
	cout << "Year : "<<  birthday.year << endl;
	cout << "Month name : "<<  birthday.month_name << endl;

	Date friend_birthday;
	cout << "Enter day : "; cin >> friend_birthday.day;
	cout << "Enter month : "; cin >> friend_birthday.month;
	cout << "Enter year : "; cin >> friend_birthday.year;
	cout << "Enter month name : "; cin >> friend_birthday.month_name;
	cout << "________________ Friend birthday ___________________" << endl;
	cout << "Day : " << friend_birthday.day << endl;
	cout << "Month : " << friend_birthday.month << endl;
	cout << "Year : " << friend_birthday.year << endl;
	cout << "Month name : " << friend_birthday.month_name << endl;
  

	

	
}
