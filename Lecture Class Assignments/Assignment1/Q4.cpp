//Question: What are the class schedules for different days of the week based on user input for the day (M, T, W, H, F)?

#include <iostream>
using namespace std;

int main()
{
char (day);
cout << "Enter the day of the week (M: Monday, T: Tuesday, W: Wednesday, H: Thursday, F: Friday): ";
cin >> day;
	switch (day)
	{
	case 'M':
		cout << "CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
		break;
	case 'T':
		cout << "PHYS 2 at 12:10, CSCI 10 lab at 2:15";
		break;
	case 'W':
		cout << "CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
		break;
	case 'H':
		cout << "PHYS 2 at 12:10";
		break;
	case 'F':
		cout << "CSCI 10 at 1:00, PHIL 11A at 2:15, MATH 12 at 4:45";
		break;
default:
		cout << "This is not a valid day.";
		break;
	}
return 0;
}
