// Question: Take as input 3 sides of a triangle and check if it is equilaterial or isosceles

#include <iostream>
using namespace std;

int main(){
  double a;
  double b;
  double c;
  cout<<"Input the first side of the triangle (can be a decimal value): ";
  cin>>a;
  cout<<"Input the second side of the triangle (can be a decimal value): ";
  cin >> b;
  cout<<"Input the third side of the triangle (can be a decimal value): ";
  cin >> c;

  if(a==b && b==c){
    cout<<"This is an equilaterial triangle";
  }
  else if(a==b || b==c || c==a){
    cout<<"This is an isosceles triangle";
  }
  else{
    cout<<"This triangle is unknown!";
  }
}
