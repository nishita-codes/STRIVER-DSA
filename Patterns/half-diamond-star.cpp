#include<iostream>
using namespace std;
void erect_pattern(int n){
    for(int i=0; i<n ;i++){
        for(int j=0; j<(i+1); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void inverted_pattern(int n){
    for(int i=1; i<n ;i++){
      for(int j=0; j<(n-i); j++){
        cout<<"*";
      }
      cout<<endl;
   }
}

int main(){
    int n=5;
    erect_pattern(n);
    inverted_pattern(n);
    return 0;
}