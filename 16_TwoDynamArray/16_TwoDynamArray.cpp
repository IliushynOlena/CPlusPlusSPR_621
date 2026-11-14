
#include <iostream>
#include <iomanip>
using namespace std;
void InitArray(int **arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}
void ShowArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<< setw(4)<< arr[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
}
void FillRow(int* arr, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        arr[i] = rand() % 10;
    }
}
int** AddRowEnd(int** arr, int &rows, int cols)
{
    int** temp = new int* [rows + 1];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = arr[i];
    }
    temp[rows] = new int[cols];
    FillRow(temp[rows],cols);
    delete[]arr;
    arr = temp;
    rows++;
    return arr;
}
int** AddRowByPosition(int** arr, int& rows, int cols, int pos)
{
    int** temp = new int* [rows + 1];
    for (int i = 0; i < pos; i++)
    {
        temp[i] = arr[i];
    }
    temp[pos] = new int[cols];
    FillRow(temp[pos], cols);
    for (int i =pos+1; i < rows+1; i++)
    {
        temp[i] = arr[i-1];
    }
    delete[]arr;
    rows++;
    return temp;
}
int** AddColEnd(int** arr, int rows, int &cols)
{
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols + 1];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp[i][j] = arr[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    for (int i = 0; i < rows; i++)
    {
        temp[i][cols] = 5;
    }
    cols++;
    return temp;
}
void DeleteRowEnd(int** &arr, int &rows, int cols)
{
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows-1; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr[rows - 1];
    delete[]arr;
    rows--;
    arr = temp;
}
int main()
{
    int rows = 5;
    int cols = 6;
    //cout << "Enter new rows : "; cin >> rows;
    //cout << "Enter new cols : "; cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    InitArray(arr, rows, cols);
    ShowArray(arr, rows, cols);
    arr = AddRowEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);

    arr = AddRowEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);

    arr = AddRowByPosition(arr, rows, cols, 4);
    ShowArray(arr, rows, cols);

    arr = AddColEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);

    arr = AddColEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);


    DeleteRowEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);

    DeleteRowEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);

    DeleteRowEnd(arr, rows, cols);
    ShowArray(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
}

