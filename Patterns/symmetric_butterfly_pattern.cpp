#include <iostream>
using namespace std;
void symmetric_pattern(int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        for (int k = 0; k < (2 * i); k++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - i); j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}

void exect_symmetric_pattern(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++ ){
            cout<<"*";
        }
        for(int k=0; k<(2*n-2*i); k++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}
    int main()
    {
        int n = 5;
       exect_symmetric_pattern(n);
        symmetric_pattern(n);
        return 0;
    }