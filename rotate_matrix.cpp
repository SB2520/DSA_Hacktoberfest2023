#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "enter the number of rows and columns:" << endl;
    cin >> rows >> columns;
    int arr[rows][columns];
    int temp[columns][rows];
    cout << "enter the elements" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            temp[i][j] = arr[j][i];
        }
    }
    int ch;
    cout << "1)clockwise\n2)anti-clockwise:" << endl;
    cout << "enter your choice=";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "after rotating clockwise by 90'" << endl;
        for (int i = 0; i < columns / 2; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                swap(temp[j][i], temp[j][columns - i - 1]);
            }
        }
        break;
    case 2:
        cout << "after rotating anti-clockwise by 90'" << endl;
        for (int i = 0; i < columns / 2; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                swap(temp[i][j], temp[columns - i - 1][j]);
            }
        }
        break;
    default:
        cout<<"invalid"<<endl;
    }

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}
