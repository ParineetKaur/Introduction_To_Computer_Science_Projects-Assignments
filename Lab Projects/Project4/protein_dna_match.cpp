// Question: What is the start index of a protein sequence within a given DNA sequence?

#include <iostream>
using namespace std;

int size;
int size2;
int indexValue;
int findIndex(char dna[size], char protein[size2]){
  int temp;
    for(int i=0; i<=size; i++) {
      if(dna[i] == protein[0]){
        i = temp;
        indexValue = temp;
        i++;
        if (dna[i] == protein[1]){
          i++;
          if (dna[i] == protein[2]){
            i++;
            if (dna[i] == protein[3]){
              i = size;
            }
        }
      }
    }
  }
  return indexValue;
  }

int main() {
  char dna[size];
  char protein[size2];

cout << "Enter a string of dna: "<<endl;
cin >> dna;
for(int j=0; dna[j] != '\0'; j++){
       if(dna[j]!=' '){
         size++;
       }
     }
cout << "The size of the DNA provided is "<<size<<"."<<endl;
cout << "Enter a desired protein (4 characters min): "<< endl;
cin >> protein;
indexValue = findIndex(dna, protein);
cout << "The start index of the protein is "<<indexValue<<endl;
return 0;
}
