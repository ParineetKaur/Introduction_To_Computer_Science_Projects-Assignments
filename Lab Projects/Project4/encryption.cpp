
#include <iostream>
#include <string>
using namespace std;

string result;
string encrypt(string in, int shift){
  for(int i = 0; in[i] != '\0'; i++) {
    result += char(int(in[i]+shift-97)%26 +97);
  }
  return result;
}

int main(){

string in;
int shift;
int size;
string answer;

cout << "Enter the word you desire to encrypt: "<<endl;
cin >> in;
size = in.length();
cout << "How many places do you want to shift: "<<endl;
cin >> shift;

answer = encrypt(in, shift);
cout << "The encrypted version of this word is "<<result<<endl;
return 0;
}
