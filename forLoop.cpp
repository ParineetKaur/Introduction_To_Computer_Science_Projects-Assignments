//Write a program that takes one value from the user and prints out all values from 0 to this number.

#include <iostream>
using namespace std;

int main(){
  int a;
  int i;
  cout<<"Provide an integer value: ";
  cin >> i;
  for(a = 0; a<=i; a++){
    cout<<a<<endl;
  }
}
