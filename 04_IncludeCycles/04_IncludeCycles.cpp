#include <iostream>
using namespace std;

int main()
{
    //Start debuger   F10
    //Start debuger   F5
    //Start  Ctrl +  F5
 


  /*  for (int i = 1; i <= 10; i++)
    {
        for (int j =1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }*/

    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << "* ";
        }   
        cout << endl;
    }
    cout << endl;

    int line;
    int star_count;
    int lenght = 20;

    line = 1;
    while (line <= lenght)
    {
        star_count = 1;
        while (star_count <= lenght)
        {
            cout << "* ";
            star_count++;
        }
        cout << endl;
        line++;
    }
    cout << endl;


    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                cout << "+ ";
            else
                cout << "- ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 5 - 1)
                cout << "+ ";
            else
                cout << "= ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i >= j and i + j >= 11 - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            cout << "|###|";
        }
        cout << endl;
    }

    int N = 20;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j and i + j >= N - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j )
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

