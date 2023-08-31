// Question: Write a program that creates the following output: 0 0 0 3 2 1 6 4 2 9 6 3 12 8 4

#include <iostream>
using namespace std;

int main(){
  for(int i = 0; i<5; i++){
    for(int j = 3; j>0; j--){
      cout << (i*j) <<" ";
    }
  }
}
