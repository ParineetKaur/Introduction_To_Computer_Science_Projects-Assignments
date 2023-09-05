

#include <iostream>
#include <cmath>
using namespace std;

void trianleArea(double a, double b, double c, double& area, double& perimeter){
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2); 
  double productValue;
  double semiPerimeter;
  cout<<"Provide the value of the first side of the triangle: "<<endl;
  cin >> a;
  cout<<"Provide the value of the second side of the triable: "<<endl;
  cin >> b;
  cout<<"Provide the value of the third side of the triable: "<<endl;
  cin >> c;
  while(a <= 0 || b <= 0 || c <= 0){
    cout << "One of these in invalid, as any side of a triangle can not be 0 or less than 0!"<<endl;
    cout<<"Provide the value of the first side of the triangle again: "<<endl;
    cin >> a;
    cout<<"Provide the value of the second side of the triangle again: "<<endl;
    cin >> b;
    cout<<"Provide the value of the third side of the triangle again: "<<endl;
    cin >> c;
  }

  if ((a > (b + c)) || (b > (a + c)) || (c > (b + a))){
    cout<<"This combination will not make a legal triangle!"<<endl;
  }

  else{
  perimeter = a + b + c;
  semiPerimeter = (perimeter)/2;
  productValue = (semiPerimeter - a)*(semiPerimeter - b)*(semiPerimeter - c);
  area = sqrt(productValue);
  cout << "The area of this triangle is "<<area<<"."<<endl;
  cout << "The perimeter of this triangle is "<<perimeter<<"."<<endl;
}
}

int main(){
  double a;
  double b;
  double c;
  double area;
  double perimeter;
  trianleArea(a, b, c, area, perimeter);
  return 0;
}
