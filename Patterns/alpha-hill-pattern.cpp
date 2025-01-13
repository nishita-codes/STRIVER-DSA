#include<iostream>
using namespace std;
void alphahill_pattern(int n){
  for(int i=0; i<n; i++){
for(int k=0; k<(n-i-1); k++){
    cout<<" ";
}
char ch= 'A';
int breakpoint = (2*i+1)/2;
for(int j=1; j<=2*i+1; j++){
    cout<<ch;
    if(j <= breakpoint) ch++;
    else ch--;
}
for(int k=0; k<(n-i-1); k++){
    cout<<" ";

  }
  cout<<endl;
}

}

int main(){
    int n =4;
    alphahill_pattern(n);
    return 0;
}
