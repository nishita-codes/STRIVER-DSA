#include<iostream>
using namespace std;

void binary_number(int n){
    
  for(int i=1; i<=n; i++){
    int start = i%2;
    for(int j=1; j<=i; j++){
        cout<<start;
        start = 1 - start;
    }
    
    cout<<endl;
  }
}

int main(){
    int n=5;
    binary_number(n);
    return 0;
}