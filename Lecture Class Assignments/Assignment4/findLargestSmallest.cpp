// File Attatched: numbers.txt, which includes numbers that are being checked in this code.
// Question: Write a program to find the largest and smallest numbers from a file named 'numbers.txt' and display the results.
// The program uses a text file named "numbers.txt" as a source of input data.

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
