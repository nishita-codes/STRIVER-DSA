#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}