// Question: Write a program to determine the number of words in a given string and calculate the frequency of each lowercase letter in the string.

#include <iostream>
#include <string>
using namespace std;

int main(){
  char str[80];
  string input;
  int size;
	cout << "Enter a string. Make sure to enter all lowercase letters.: ";
  getline(cin,input);
  strcpy(str, input.c_str());
	int words = 0;
  for(int i = 0; str[i] != '\0'; i++){
		if (str[i] == ' ') {
			words++;
		}
	}
  cout << "The number of words = " << words+1 << endl;
   int i = 0, alphabet[26] = {0}, j;
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
	return 0;
}
