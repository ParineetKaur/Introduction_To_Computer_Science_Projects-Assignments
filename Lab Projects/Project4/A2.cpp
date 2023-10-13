//Question: Given a string of characters, what is the substring that starts at a specified initial position (position1) and ends at a specified final position (position2) within the string?

#include <iostream>
#include <string>
using namespace std;

void subString(char stringInput[], int position1, int position2, int length);

int main(){
  int length;
  char stringInput[length];
  int position1;
  int position2;

  cout << "Input a string of characters (without any spaces): "<<endl;
  cin >> stringInput;
  cout << "Enter the intitial position: "<<endl;
  cin >> position1;
  cout << "Enter the final position: "<<endl;
  cin >> position2;
  cout << "Enter the length of the string: ";
  cin >> length;
  subString(stringInput, position1, position2, length);
  return 0;
}

void subString(char stringInput[], int position1, int position2, int length){
  for(int i = position1; i <= position2; i++){
    cout << stringInput[i];
  }
}
