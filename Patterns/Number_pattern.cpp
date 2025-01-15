#include<iostream>
using namespace std;
 void number_pattern(int n){
    for(int i=1; i<(n+3); i++){
        for (int j=1; j<(n+3); j++){
         if(i==1 || i==(n+3-1) || j==1 || j==(n+3-1)){
            cout<<"4";
         }
         else if ((i==2 || i==(n+3-2)) || j==2 || j==(n+3-2)){
                cout<<"3";
        }
        else if((i==3 || i==(n+3-3)) || j==3 || j==(n+3-3)){
           cout<<"2";
        }
         else{
            cout<<"1";
         }
        }
        cout<<endl;
    }
}
int main(){
    int n=5;
    number_pattern(n);
    return 0;
 }