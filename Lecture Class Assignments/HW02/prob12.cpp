//Question 4 of Homework02

#include <iostream>
#include <string>
using namespace std;

bool isLeapYear(int year);
int getYearValue(int year);
int getMonthValue(string month, int year);
int getCenturyValue(int year);

int main(){
  std::string month;
  int day;
  int year;
  cout << "Input the month: ";
  cin >> month;
  cout << "Input the day: ";
  cin >> day;
  cout << "Input the year: ";
  cin >> year;

  int sumCompute;
  int dayOfWeek;
  string dayName;
  sumCompute = day + getMonthValue(month, year) + getYearValue(year) + getCenturyValue(year);
  dayOfWeek = sumCompute % 7;

  if (dayOfWeek == 0){
		dayName = "Sunday";
  }

  else if (dayOfWeek == 1){
    dayName = "Monday";
  }

  else if (dayOfWeek == 2){
		dayName = "Tuesday";
  }

  else if (dayOfWeek == 3){
		dayName = "Wednesday";
  }

  else if (dayOfWeek == 4){
		dayName = "Thursday";
  }

  else if (dayOfWeek == 5){
	  dayName ="Friday";
  }

  else if (dayOfWeek == 6){
		dayName = "Saturday";
  }

  cout << "The day of the week is "<<dayName<<" , as the date provided was "<<month<<" "<<day<<", "<<year<<"."<<endl;
    return 0;
}


bool isLeapYear(int year){
  int leap_year;
  return (leap_year = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
}

int getCenturyValue(int year){
  int century;
	int remainderValue;
  century = year/100;
  remainderValue = (century % 4);
  return ((3 - remainderValue) * 2);
}

int getYearValue(int year){
  int sinceBeginCentury;
  sinceBeginCentury = year % 100;
  return (sinceBeginCentury + (sinceBeginCentury/4));
}

int getMonthValue (string month, int year){
  int returnValue;
  if (month == "January"){
		if (isLeapYear(year)){
      returnValue = 6;
    }
    else{
      returnValue = 0;
    }
	}

    else if (month == "February"){
      if (isLeapYear(year)){
        returnValue = 2;
      }
      else{
        returnValue = 3;
      }
    }

    else if (month == "March"){
      returnValue = 3;
    }

    else if (month == "April"){
      returnValue = 6;
    }

    else if (month == "May"){
      returnValue = 1;
    }

    else if (month == "June"){
      returnValue = 4;
    }

    else if (month == "July"){
      returnValue = 6;
    }

    else if (month == "August"){
      returnValue = 2;
    }

    else if (month == "September"){
      returnValue = 5;
    }

    else if (month == "October"){
      returnValue = 0;
    }

    else if (month == "November"){
      returnValue = 3;
    }

    else if (month == "December"){
      returnValue = 5;
    }
    return returnValue;
  }
