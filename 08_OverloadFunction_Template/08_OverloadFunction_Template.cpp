
#include <iostream>
using namespace std;

int A = 100;//global variable 
void Change(int a, int b)
{
    cout << "a = " << a << " b = " << b << endl;
    int temp = a;
    a = b;  
    b = temp;
    cout << "a = " << a << " b = " << b << endl;
    cout << A << endl;
}
//void foo(int a = 1, int b = 2)
//void foo(int a = 1, int b = 2, int k)  error
//void foo(int k, int a = 1, int b = 2) 
void foo(int k = 0, int a = 1, int b = 2) 
{
    cout << a << " " << b << endl;
    cout << A << endl;

}
void Star(int count = 20)
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
    cout << A << endl;
}
void SomeFunction()
{
    static int A = 5;
    A++;
    cout << A << endl;
    cout << ::A << endl;
}
//перезавантаження функцій по типу даних
/*
int max_element(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
long max_element(long arr[], int size)
{
    long max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
float max_element(float arr[], int size)
{
    float max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
char max_element(char arr[], int size)
{
    char max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
*/
// Шаблони функцій
template<typename T>
T max_element(T arr[], int size)
{
    T max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}



//перезавантаження функцій по кількості аргументів
double multy(double x)
{
    return x * x * x;
}
double multy(double x, double y)
{
    return x * y * x;
}
double multy(double x, double y, double z)
{
    return x * y * z;
}
//double multy(double x= 1, double y = 2, double z = 3, double k = 4)
//{
//    return x * y * z*k;
//}
template<typename T>
T Max(T a, T b)
{
    return (a > b) ?  a :  b;
}

template<typename T1, typename T2>
T2 MaxDiff(T1 a, T2 b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << Max(55, 14) << endl;
    cout << Max(55, 140) << endl;
    cout << Max(5.99f, 1.78f) << endl;
    cout << Max('A', 'G') << endl;
    cout << MaxDiff(55.8, 9) << endl;
    cout << MaxDiff(55, 99.89) << endl;
  /*  cout << "Res = " << multy() << endl;
    cout << "Res = " << multy(5) << endl;
    cout << "Res = " << multy(5,7) << endl;
    cout << "Res = " << multy(5,8,6) << endl;
    cout << "Res = " << multy(5,8,6,8) << endl;*/
    int x[] = { 10,20,30,40,50,60,70,80,90 };
    long l[] = { 1l,2l,3l,4l,5l,6l,7l,8l,9l };
    float f[] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
    char let[] = { 'd','y','w','p','u','a','f','m','x' };
    int t[]{ 9,8,7,6,5,4,3,2,1 };
    cout << "Max element : " << max_element(x, 9) << endl;
    cout << "Max element : " << max_element(l, 9) << endl;
    cout << "Max element : " << max_element(f, 9) << endl;
    cout << "Max element : " << max_element(let, 9) << endl;
    cout << "Max element : " << max_element(t, 9) << endl;
    


    /*
    SomeFunction();
    SomeFunction();
    SomeFunction();
    SomeFunction();
    cout << A << endl;


    Star(5);
    Star(50);
    Star();
    foo(5, 9, 3);
    foo(5, 9);
    foo(5);
    foo();
    //foo(5);
    //foo();
    */

  /*  int x = 5, y = 3;
    cout << "x = " << x << " y = " << y << endl;
    Change(x, y);
    cout << "x = " << x << " y = " << y << endl;

    int a = 5;
    if (a == 5)
    {
        int b = 7;
        cout << b << endl;
    }*/

}

