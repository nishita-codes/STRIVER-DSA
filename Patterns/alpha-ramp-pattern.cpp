#include<iostream>
using namespace std;
void alpha_pattern(int n){
  for(int i=0; i<n; i++){
    char ch=('A'+i);
    for(int j=0; j<=i; j++){
        cout<<ch<<" ";
    }
    cout<<endl;
  }
}

int main(){
    int n=5;
    alpha_pattern(n);
    return 0;
}
