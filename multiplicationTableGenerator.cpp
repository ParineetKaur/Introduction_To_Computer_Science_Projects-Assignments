//QWrite a function that takes in a value 'N' from the user and prints the multiplication table of the same till N*10.

#include <iostream>
using namespace std;

void multiplicationTable(int N){
  for (int i=0; i<=10;i++){
    cout<<N<<"*"<<i<<"="<<N*i<<endl;
  }
}
int main(){
  int N;
  cout<<"Enter an integer value: ";
  cin>>N;
  multiplicationTable(N);
}
