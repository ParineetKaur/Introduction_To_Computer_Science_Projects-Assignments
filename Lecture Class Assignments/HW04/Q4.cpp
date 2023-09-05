//Question 4 from HW04, Attatched txt files for input: GradeFile.txt, Attatched ouput File: GradeAverageFile.txt

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void average(ifstream& input, ofstream& output){
  int i;
  string firstName;
  string lastName;
  int sum;
  int grades;
  double avg;
  input >> firstName;
  while(input){
    sum = 0;
    input >> lastName;
    output << firstName << " " << lastName << " ";
    for (i = 0; i < 10; i++){
      input >> grades;
      output << grades << " ";
      sum += grades;
    }

    output.setf(ios::fixed | ios::showpoint);
    output.precision(2);
    avg = sum/10.0;
    output << avg << endl;
    input >> firstName;
  }
}

int main(){
  ifstream input;
  ofstream output;
  input.open("GradeFile.txt");
  if (input.fail()){
    cout << "Grades file cannot be opened!" << endl;
		exit(1);
  }
  output.open("GradeAverageFile.txt");
  average(input, output);

  input.close();
  output.close();
  return 0;
}
