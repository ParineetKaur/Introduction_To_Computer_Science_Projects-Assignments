// Question: Create a C++ program that performs conversions between units of length and weight based on user input and allows the user to repeat the calculations if desired.

#include <iostream>
using namespace std;

int conversionChoice;
void convertLengths(double feet, double inches, double meters, double centimeters){
  if (conversionChoice == 3){
    double tempForMeters;
    double tempForCent;
    cout << "Feet: "<<endl;
    cin >> feet;
    cout << "Inches: "<<endl;
    cin >> inches;
    tempForMeters = (feet+(inches/12.0))*0.3048;
    meters = tempForMeters;
    tempForCent = (tempForMeters * 100) - 100;
    centimeters = tempForCent;
    cout << "Length in meters: "<<meters<<" m."<<endl;
    cout << "Length in centimeters: "<<centimeters<<" cm."<<endl;
  }

  if (conversionChoice == 4){
    cout << "Meters: "<<endl;
    cin >> meters;
    cout << "Centimeters: "<<endl;
    cin >> centimeters;
    feet = (meters + centimeters/100)/0.3048;
    inches = (feet * 12);
    cout << "Length in feet: "<<feet<<" ft."<<endl;
    cout << "Length in inches: "<<inches<<" in."<<endl;
  }
}

void convertWeights(double pounds, double ounces, double kilograms, double grams){
  if (conversionChoice == 5){
    cout << "Pounds: "<<endl;
    cin >> pounds;
    cout << "Ounces: " << endl;
    cin >> ounces;
    kilograms = (pounds + ounces/16) * 0.4535923744953;
    grams = (kilograms * 1000);
    cout << "Weight in kilograms: "<<kilograms<<" kg."<<endl;
    cout << "Weight in grams: "<<grams<<" g."<<endl;
  }

  if (conversionChoice == 6){
    cout << "Kilograms: "<<endl;
    cin >> kilograms;
    cout << "Grams: " << endl;
    cin >> grams;
    pounds = (kilograms + grams/1000) / 2.2046;
    ounces = (pounds * 16);
    cout << "Weight in pounds: "<<pounds<<" lbs."<<endl;
    cout << "Weight in ounces: "<<ounces<<" oz."<<endl;
  }
}

int main(){
  int repeatProgram;
  double feet;
  double inches;
  double meters;
  double centimeters;
  double pounds;
  double ounces;
  double kilograms;
  double grams;

  cout << "Would you like to convert lengths or weights? If you want to convert lengths, enter 1. If you want to convert weights, enter 2: "<<endl;
  cin >> conversionChoice;

  do{
  if (conversionChoice == 1){
    cout << "If you want to convert from feet and inches to meters and centimers, enter 3? To convert from meters and centimeters to feet and inches, enter 4: "<<endl;
    cin >> conversionChoice;
    if (conversionChoice == 3){
      convertLengths(feet, inches, meters, centimeters);
    }
    else if (conversionChoice == 4){
      convertLengths(feet, inches, meters, centimeters);
    }
  }

  if (conversionChoice == 2){
    cout << "If you want to convert from pounds and ounces to kilograms and grams, enter 5? To convert from kilograms and grams to pounds and ounces, enter 6: "<<endl;
    cin >> conversionChoice;
    if (conversionChoice == 5){
      convertWeights(pounds, ounces, kilograms, grams);
    }
    else if (conversionChoice == 6){
      convertWeights(pounds, ounces, kilograms, grams);
    }
  }
  cout <<"Would you like to repeat these calculations? If yes, type 1. If no, enter any other number. "<<endl;
  cin >> repeatProgram;
} while (repeatProgram == 1);

return 0;
}
