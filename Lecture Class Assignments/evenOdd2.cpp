//Take an input from the user and print if the number is even or odd

#include <iostream>
using namespace std;

int main(){
  int x;
  cout<<"Provide an integer number: ";
  cin >> x;

  if (x%2 == 0){
    cout<<"This number is even.";
  }
  else{
    cout<<"This number is odd";
  }
}
