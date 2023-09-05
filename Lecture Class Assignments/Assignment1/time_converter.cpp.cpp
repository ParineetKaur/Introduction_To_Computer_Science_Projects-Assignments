// Question: 

#include <iostream>
using namespace std;

void inputValues(int& hour, int& minute){
  cout << "Provide an integer value for hours (written in 24-hour notation): ";
  cin >> hour;
  while (hour > 23){
    cout<<"The value you enteered is invalid! Enter a valid value."<<endl;
    cout<<"Provide an integer value for the hour (written in 24-hour notation): ";
    cin >> hour;
  }
  cout << "Provide an integer value for the minutes (written in 24-hour notation): ";
  cin >> minute;
  while(minute > 59){
    cout<<"The value you enteered is invalid! Enter a valid value."<<endl;
    cout<<"Provide an integer value for the minutes (written in 24-hour notation): ";
    cin >> minute;
  }
  cout << "The time you entered is "<<hour<<":"<<minute<<"."<<endl;
}

void convertTime(char& timeReference, int& hour, int& minute){
  if(hour > 12){
		hour = hour - 12;
		timeReference = 'p';
	}

  else if(hour == 12){
    timeReference = 'p';
  }
	else{
    timeReference = 'a';
  }
}

void outputTime(char& timeReference, int& hour, int& minute){
	if(timeReference == 'p'){
		if(minute < 10){
      cout << hour << ":0" << minute << " P.M."<<endl;
    }
		else{
      cout << hour << ":" << minute << " P.M."<<endl;
    }
  }
	else if(minute > 10){
      cout << hour << ":0" << minute << " A.M."<<endl;
    }
		else{
      cout << hour << ":" << minute << " A.M."<<endl;
    }
	}

int main(){
  int hour;
  int minute;
  char timeReference;
  char repeatCalculations;

  do{
    inputValues(hour, minute);
  	convertTime(timeReference, hour, minute);
  	outputTime(timeReference, hour, minute);
    cout <<"Enter 'y' to run again and 'n' to stop: "; 
    cin >> repeatCalculations;
  }while(repeatCalculations == 'y' || repeatCalculations == 'Y');
  return 0;
  }
