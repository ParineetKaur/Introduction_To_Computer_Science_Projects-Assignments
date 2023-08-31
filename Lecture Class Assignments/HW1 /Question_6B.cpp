#include <iostream>
using namespace std;

int main()
{
  int score = 0;
  double average_Score;
  int numOfscores = 0;
  int sum = 0;
  cout << "Enter the score: ";
  cin >> score;

  while (score >= 0 && score <= 30)
    {
      sum += score;
      numOfscores++;
      cout << "Enter the score: ";
      cin >> score;
    }

    if (score == -1 || score > 30)
      cout << "Enter a valid score: ";
      cin >> score;

    if (score < -1)
      average_Score = sum/numOfscores;
      cout << "The average score is " << average_Score << endl;
  }
