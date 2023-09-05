// Question: Create an algorithm to find the average score of a set of quiz scores entered by the user. If user enters -1 as a score, it calculates and displays the average score of all the scores entered.
// This question is continued in the file 1A2.cpp and 1A3.cpp

#include <iostream>
using namespace std;
const int MAX_NUMBER_SCORES = 31;

int main()
{
  double score[MAX_NUMBER_SCORES];
  double sum = 0;
  int index = 0;
  double average_Score;
  cout << "This program reads quiz scores and shows\n";
  cout << "their average."<<endl;
  while (index < MAX_NUMBER_SCORES){
    cout << "Enter the score: ";
    cin >> score[index];
    sum += score[index];
    if (score[index] == -1){
      average_Score = sum/index;
      cout << "The average value of the quiz scores is " << average_Score << endl;
    }
    index++;
    }
    return 0;
  }
