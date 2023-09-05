//Question 1 of Homework02

#include <iostream>
#include <cmath>
using namespace std;

const double gravitationalconstant = 6.673*(pow(10,-8));
double gravitationalForce;
int repeatCalculations;
double getValue(int firstMass, int secondMass, int distanceValue){
  //gravitationalForce must be in g * cm/sec^2
    int massValue = (firstMass) * (secondMass);
    gravitationalForce = (gravitationalconstant * massValue)/(pow(distanceValue,2));
    return gravitationalForce;
}

int main(){
int firstMass;
int secondMass;
int distanceValue;
cout << "Provide an integer value for how many times you would want to run these calculations: "<<endl;
cin >> repeatCalculations;

for (int i = repeatCalculations; i > 0; i--){
  cout << "Provide an integer value for the mass of the first body: "<<endl;
  cin >> firstMass;
  cout << "Provide an integer value for the mass of the second body: "<<endl;
  cin >> secondMass;
  cout << "Provide an integer value for the distance between these two bodies: "<<endl;
  cin >> distanceValue;
  double ans = getValue(firstMass, secondMass, distanceValue);
  cout << "The graviatioanl force between these bodies is "<<gravitationalForce<<" dynes."<<endl;
}
return 0;
}
