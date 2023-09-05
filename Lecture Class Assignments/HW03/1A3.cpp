// Question: Continued from 1A1.cpp and 1A2.cpp. Change the algorithm to find the highest score among the entered quiz scores and  lowest score among the entered quiz scores.

#include <iostream>
using namespace std;
const int MAX_NUMBER_SCORES = 30;
int NUM_OF_SCORES;

void findMax(double score[], double max, int size);
void findMin(double score[], double min, int size);

int main()
{
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  double score[MAX_NUMBER_SCORES];
  double sum = 0;
  double max;
  double min;
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
  findMax(score, max, NUM_OF_SCORES);
  findMin(score, min, NUM_OF_SCORES);
  return 0;
}

void findMax(double score[], double max, int size){
  max = score[0];
  for(int j = 1; j < size; j++){
    if(score[j]>max){
      max = score[j];
    }
  }
  cout << "The highest score is "<<max<<"."<<endl;
}

void findMin(double score[], double min, int size){
  min = score[0];
  for(int a = 0; a < size; a++){
    if(score[a]<min){
      min = score[a];
    }
  }
  cout << "The lowest score is "<<min<<"."<<endl;
}
