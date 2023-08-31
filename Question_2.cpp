#include <iostream>
using namespace std;

int main(){
const double artificial_Sweetner = 0.001;
int diet_Soda;
double sweetner_Mouse;
int mouse_Weight;
int dieter_Weight;
int dieter_Sweetner;

cout << "Enter the amount of artifical sweetner needed to kill a mouse: ";
cin >> sweetner_Mouse;
cout << "Enter the weight the of the mouse: ";
cin >> mouse_Weight;
cout << "Enter the weight of the dieter: ";
cin >> dieter_Weight;

dieter_Sweetner = (sweetner_Mouse/mouse_Weight) * (dieter_Weight);
diet_Soda = (dieter_Sweetner/artificial_Sweetner);
cout << "It is possible to drink " <<diet_Soda<< "without dying.";
}
