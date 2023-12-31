// Question: Continued from file 1A1.cpp. There are new features to this algorithm: 1) User has to specify the number of scores they will be entering and 2) Checks for valid scores by ensuring they are within the range [0, 30] and not equal to -1.

#include <iostream>
using namespace std;
const int MAX_NUMBER_SCORES = 30;
int NUM_OF_SCORES;

int main()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  double score[MAX_NUMBER_SCORES];
  double sum = 0;
  double average_Score;
  double scoreGiven;
  cout << "This program can read "<<MAX_NUMBER_SCORES<<" quiz scores and shows. Their average is given in the end."<<endl;
  cout << "How many scores will you be entering today?: ";
  cin >> NUM_OF_SCORES;
  for (int index = 0; index < NUM_OF_SCORES; index++){
    do{
      cout << "Enter a valid score: ";
      cin >> scoreGiven;
    } while(scoreGiven == -1 || scoreGiven > MAX_NUMBER_SCORES);
    score[index] = scoreGiven;
    sum += score[index];
  }
  average_Score = sum/NUM_OF_SCORES;
  cout << "The average score is " << average_Score << endl;
  return 0;
}
