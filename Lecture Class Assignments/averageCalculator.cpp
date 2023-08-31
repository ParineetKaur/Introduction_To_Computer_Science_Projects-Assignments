// Write a program to take 10 integers from user using loop and print their average value on screen.

#include <iostream>
using namespace std;

int main(){
  int averageValue;
  int sum = 0;
  int n;
  for (int i=0; i<10;i++){
    cout<<"Enter an integer value(this repeats 10 times): ";
    cin>>n;
    sum = sum + n;
  }
averageValue = sum/10;
cout<< "The average value is "<<averageValue<<endl;
}
