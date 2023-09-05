//Question 8 of Homework02

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int randomWinner;
  srand(time(0));
  for(int i=1; i<=4; i++){
      randomWinner = (rand()%25+1);
      cout << "Finalist is "<<randomWinner<<endl;
  }
  return 0;
}
