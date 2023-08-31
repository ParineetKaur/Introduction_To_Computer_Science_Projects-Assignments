//Create a function that prompts the user and inputs exactly 10 integers one at a time using a loop and returns the product (multiplication of all input integers).

#include <iostream>
using namespace std;

int getValue(int n){
  int productValue = 1;
  for (int i=0; i<10;i++){
    cout<<"Enter an integer value (this must not be 0): ";
    cin>>n;
    productValue = productValue*n;
  }
  return productValue;
}
int main(){
  int n;
  int ans = getValue(n);
  cout<<"The product of these values is: "<<productValue<<endl;
}
