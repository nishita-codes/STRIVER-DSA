#include<iostream>
using namespace std;

void increasing_pattern(int n){
     int start = 1;
    for (int i = 0; i < n; i++){
       for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1 + start;
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    increasing_pattern(n);
    return 0;
}