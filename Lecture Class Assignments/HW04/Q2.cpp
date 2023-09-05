//Question 2 of HW04. File Attatched: numbers.txt, which includes numbers that are being checked in this code
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
  string fileName = "";
	int number;
	int largestNumber = INT_MIN;
	int smallestNumber = INT_MAX;

	ifstream infile;
	infile.open("numbers.txt");

	if (infile.fail()){
    cout << "numbers.txt cannot be opened!" << endl;
		exit(1);
  }

	while (infile >> number){
		if (number > largestNumber){
			largestNumber = number;
    }

    if (number < smallestNumber){
			smallestNumber = number;
    }
  }

  cout << "The largest number in the file is  " << largestNumber << endl;
	cout << "The smallest number in the file is "<< smallestNumber << endl;
  infile.close();
  return 0;
}
