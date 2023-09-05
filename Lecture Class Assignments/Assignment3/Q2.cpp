// Question: Create an algorithm to remove duplicate letters from a sentence and display the modified sentence. 

#include <iostream>
using namespace std;

void deleteRepeats(char a[], int size, int& elementsUsed);
void output(char a[], int& elementsUsed);

int main()
{
char array[100];
int elementsUsed;
deleteRepeats(array, 100, elementsUsed);
output(array, elementsUsed);
}

void deleteRepeats(char a[], int size, int& elementsUsed)
{
char b;
int elementCount = 0;
cout << "Please a center with letters only: "<<endl;
cin.get(b);

 while (b != '\n' && elementCount < size) {
  a[index] = b;
  cin.get(b);
  elementCount++;
}
elementsUsed = elementCount;
cout << "The size of the array is " << elementsUsed << endl;

 for (int i = 0; i < elementsUsed; i++) {
  for (int j = i + 1; j < elementsUsed; j++) {
   if (a[i] == a[j]) {
    elementsUsed = elementsUsed - 1;
    for (int l = j; l < elementsUsed; l++)
     a[l] = a[l + 1];
    a[elementsUsed] = '\0';
    --j;
   }
  }
}
}

void output(char a[], int& elementsUsed)
{
cout << "The new sentence without the repeated letters is:\n";
for (int i = 0; i < elementsUsed; i++) {
  cout << a[i];
}
cout << "The new size of the array is " << elementsUsed << endl;
}
