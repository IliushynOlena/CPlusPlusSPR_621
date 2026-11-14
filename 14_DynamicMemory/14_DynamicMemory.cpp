#include <iostream>
#include <conio.h>
using namespace std;

void Test1()
{
    const int size = 10;
    int arr[size];
}
void Test2()
{
    int size = 5;
    int* arr = new int[size];
    delete[]arr;
}
int* CreateArray(int size)
{
    int* arr = new int[size];
    return arr;
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
int* AddNumber(int *arr, int* size, int number)
{
    (*size)++;
    int* temp = new int[*size];
    for (int i = 0; i < *size-1; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size - 1] = number;
    delete[]arr;
    arr = temp;
    return arr;
}
int main()
{
    srand(time(0));
    int size = 5;
    //cout << "Enter size array : "; cin >> size;
    int * arr = CreateArray(size);
    InitArray(arr, size);
    ShowArray(arr, size);

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "Do you want to add number ? y/n";
        choice = _getch();
        if (choice == 'n')break;

        cout << "\nEnter number : ";
        cin >> number;
        arr = AddNumber(arr,&size, number);
       system("cls");
        ShowArray(arr, size);


    }


    delete[]arr;


    /*
    int a = 10;

    int *pa = new int(100);
    int* pb = new int;
    int* pc = nullptr;


    cout << "*pa  =" << *pa << endl;

    *pb = 55;
    cout << "*pb  =" << *pb << endl;
    //cout << "*pc  =" << *pc << endl;//error

    pc = new int(10);
    cout << "*pc  =" << *pc << endl;

    delete pc;
    pc = new int(47);
    cout << "*pc  =" << *pc << endl;


    delete pa;
    delete pb;
    delete pc;
    */
}

