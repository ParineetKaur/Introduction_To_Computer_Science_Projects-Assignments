// Question: How can you calculate the average score of a series of input scores within the range of 0 to 30, inclusive, while handling invalid scores by prompting the user for valid scores until they enter a negative value or a score greater than 30?

#include <iostream>
using namespace std;

int main(){
  int score = 0;
  double average_Score;
  int numOfscores = 0;
  int sum = 0; 
  cout << "Enter the score: ";
  cin >> score;

  while (score >= 0){
    if (score >= 0 && score <= 30){
      sum += score;
      numOfscores++;
    }
    else{
      cout << "Invalid score. Enter a score between 0 and 30, or -1 to finish: ";
    }
  }
  cout << "Enter the score: ";
  cin >> score;
  return 0;
}
