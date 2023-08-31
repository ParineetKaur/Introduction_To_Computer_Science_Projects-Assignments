#include <iostream>
using namespace std;

int main(){
int weight; // in kilograms (convert from kilos to pounds --> pounds/2.2)
int running_METS;
int minutes_Running;
int calories;
int calories_Minute;

cout << "Enter subject's weight in pounds: ";
cin >> weight;
weight = weight * 2.2;
cout << "Enter the number of METS for running: ";
cin >> running_METS;
cout << "Enter the number of minutes spent on running: ";
cin >> minutes_Running;

calories = 0.0175 * running_METS * weight;
calories_Minute = calories/minutes_Running;
cout << "There are" << calories_Minute << " cal/min burned while running";
}
