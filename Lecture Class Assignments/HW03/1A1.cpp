//Part A of Question 6A from HW01

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
