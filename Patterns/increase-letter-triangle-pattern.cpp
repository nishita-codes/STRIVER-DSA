#include<iostream>
using namespace std;

void increase_pattern(int n){

    for(int i=0; i<n; i++){
        for(char ch='A'; ch<=i+'A'; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    increase_pattern(n);
    return 0;
}