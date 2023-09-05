//Question: What is the average score of a series of input scores until a negative value (-1) is entered?

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

  while (score >= 0)
    {
      sum += score;
      numOfscores++;
      cout << "Enter the score: ";
      cin >> score;
    }

    if (score == -1)
      average_Score = sum/numOfscores;
      cout << "The average score is " << average_Score << endl;
  }
