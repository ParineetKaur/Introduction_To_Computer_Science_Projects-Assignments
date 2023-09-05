//Attatched txt files for input: textFile1.txt and textFile3.txt, Attatched ouput File: textFile3.txt
//Question: Write a program to merge and sort two input text files, textFile1.txt and textFile2.txt, and save the sorted result in textFile3.txt.

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream fileIn1;
  ifstream fileIn2;
  ofstream fileOut;
  int input1;
  int input2;

  fileIn1.open("textFile1.txt");
  fileIn2.open("textFile2.txt");
  fileOut.open("textFile3.txt");

  if (fileIn1.fail()){
    cout << "File 1 cannot be opened!" << endl;
		exit(1);
  }

  if (fileIn2.fail()){
    cout << "File 2 cannot be opened!" << endl;
		exit(1);
  }
  if (fileOut.fail()){
    cout << "File 3 cannot be opened!" << endl;
		exit(1);
  }

  fileIn1 >> input1;
  fileIn2 >> input2;

  while(!fileIn1.eof() && !fileIn2.eof()){
    if (input1 < input2){
        fileOut << input1 << " ";
        fileIn1 >> input1;
      }

    else{
        fileOut << input2 << " ";
        fileIn2 >> input2;
      }
    }

    if (input1 < input2){
      while(!fileIn2.eof()){
        fileOut << input2 << " ";
        fileIn2 >> input2;
      }
    }

    else{
      while(!fileIn1.eof()){
        fileOut << input1 << " ";
        fileIn1 >> input1;
      }
    }

    fileIn1.close();
    fileIn2.close();
    fileOut.close();
  }
