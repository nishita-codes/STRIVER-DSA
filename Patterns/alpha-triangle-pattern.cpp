#include<iostream>
using namespace std;
void alphatriangle_pattern(int n){
  for(int i=0; i<n; i++){
   for(char ch=('A'+n-1)-i; ch<=('A'+n-1); ch++){
    cout<<ch;
    }
   cout<<endl;
  }
}

int main(){
    int n=5;
   alphatriangle_pattern(n);
   return 0;
}