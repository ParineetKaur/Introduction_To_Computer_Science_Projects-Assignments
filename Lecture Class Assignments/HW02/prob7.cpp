//Question 2 of Homework02

#include <iostream>
#include <cmath>
using namespace std;

double windChill;
double getValue(double v, double t){
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2); 
  double squareRoot = sqrt(v);
  double expression_1 = ((10 * squareRoot) - (v + 10.5));
  double expression_2 = (33-t);
  double numValue = expression_1 * expression_2; //numerotor value
  double fractValue = 33 - (numValue/23.1); // fraction getValue
  windChill = 33 - fractValue;
  return windChill;
}

double getTemp(double t){
    do{
      cout << "Enter a temperature in Celsius that is less than or equal to 10:  ";
      cin >> t;
   }while (t > 10);

   return t;
 }

int main(){
  double v;
  double t;

  cout<<"Provide the wind speed: ";
  cin >> v;
  double ans1 = getTemp(t);
  double ans2 = getValue(v, t);
  cout << "The wind chill index is "<<windChill<<" Celcius."<<endl;
  return 0;
}
