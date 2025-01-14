#include<iostream>
using namespace std;
 void practice_pattern(int n){
    for(int i=0; i<n; i++){
        for (int j=0; j<=n; j++){
         if(i==1||j==2){
            cout<<" ";
         }
         if(i==2||j==1||j==3){
            cout<<" ";
         }
         if(i==3||j==2){
            cout<<" ";
         }
            else{
                cout<<"*";
            }
        }
        cout<<endl;  
        }
        
          
        }
        
    
 

 int main(){
    int n=5;
    practice_pattern(n);
    return 0;
 }