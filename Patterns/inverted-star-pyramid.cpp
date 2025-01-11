#include <iostream>
using namespace std;
void erect_pyramid(int n){
for (int i = 0; i < n; i++)
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
   void inverted_pyramid(int n){
    for (int s = 0; s<n; s++)
    {
   for (int k = 0; k < s; k++)
    {
        cout << " ";
    }
    for (int j = 0; j < (2 * n - (2 * s + 1)); j++)
    {
        cout << "*";
    }
    for (int k = 0; k < s; k++)
    {
        cout << " ";
    }
    cout << endl;
}
}

int main(){
    int n=5;
    erect_pyramid(n);
    inverted_pyramid(n);
    return 0;
}