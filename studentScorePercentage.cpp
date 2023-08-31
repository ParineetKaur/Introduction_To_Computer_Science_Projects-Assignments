// Take as input from a user (a score). Print the total points and find the percentage of the student's score.

#include <iostream>
using namespace std;

int main(){
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);
  double scorePercentage;
  double ratio;
  double totalPoints;
  double score;
  cout<<"Provide the score the student received: ";
  cin>> score;
  cout<<"Provide the total number of points possible: ";
  cin>>totalPoints;
  ratio = score/totalPoints;
  scorePercentage = ratio*100;
  cout << "The percentage of this score is " << scorePercentage <<"%."<<endl;
}
