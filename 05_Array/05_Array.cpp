#include <iostream>
using namespace std;

int main()
{
    //Масив — це набір однотипних даних, об'єднаний загальним ім'ям.
    int mark = 12;

    int train[3];
    train[0] = 3;
    train[1] = 1;
    train[2] = 4;
    //train[3] = 14;

    cout << train[0] << endl;
    cout << train[1] << endl;
    cout << train[2] << endl;
    //cout << train[3] << endl;


    //int arr[5];

    const int size = 10;    
    int arr[size]{};// empty
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
   

    int arr2[size] = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int arr3[] = { 1,77,88 };
    for (int i = 0; i < 3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    int arr4[size] = { 5,7,9,11};
    for (int i = 0; i < size; i++)
    {
        cout << arr4[i] << " ";
    }
    cout << endl;

    /*int arr5[size]{};
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " number : ";
        cin >> arr5[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr5[i] << " ";
    }
    cout << endl;*/

    //1.Написати програму, яка знаходить суму всіх від'ємних значень у масиві.
    //2.Написати програму, яка знаходить мінімальне й 
    //    максимальне значення в масиві і виводить їх на екран.
    // 
    // 3.Дана програма, яка визначає останнє додатне і перше
    //від'ємне число в масиві.
    int arr6[size] = { 5,-7,8,-9,1,2,-1,-3,7,4 };
    //int arr6[size] = { -5,-7,-8,-9,-1,-2,-1,-3,-7,-4 };
    //int arr6[size] = { 5,7,8,9,1,2,1,3,7,4 };
    int summa = 0;
    int max = arr6[0];
    int min = arr6[0];
    int last_positive;
    int first_negative;
    for (int i = 0; i < size; i++)
    {
        if (arr6[i] < 0)
        {
            first_negative = arr6[i];
            break;
        }
    }
    for (int i = size-1; i >= 0 ; i--)
    {
        if (arr6[i] > 0) {
            last_positive = arr6[i];
            break;
        }
    }





    for (int i = 0; i < size; i++)
    {
        if (arr6[i] < 0)
            summa += arr6[i];

        if (arr6[i] > max)
            max = arr6[i];

        if (arr6[i] < min)
            min = arr6[i];
    }
    cout << "Summa all negative elements " << summa << endl;
    cout << "Max element " << max << endl;
    cout << "Min element " << min << endl;
    cout << "Last positive element " << last_positive << endl;
    cout << "First negative element " << first_negative << endl;
}

