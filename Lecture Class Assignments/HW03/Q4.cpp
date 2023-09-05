//Question 4 of HW03

#include <iostream>
#include<cstring>
using namespace std;

int main(){
  char string[100];
  int length = 0;
  int j = 0;
  String sentence;
  cout<<"Enter a sentence of characters only: "<<endl;
  getline(cin, sentence);
  length = sentence.length();
  char a[100];
  strcpy(string, sentence.c_str());//converting to c-string to look at each character
  for(int i = 0; i<length; i++){
    if(string[i]==' ' && string[i+1]==' ')
    continue;
    if(string[i]>=65 && string[i]<=90){
      a[j++]=string[i]+32;
    }
    else{
      a[j++]=string[i];
    }
  }
a[0]=a[0]-32;

for(int i=0;i<j;i++){
  cout<<a[i];
}
return 0;
}
