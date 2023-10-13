//Question: What is the minimum element in an array of numbers entered by the user?

#include <iostream>
using namespace std;
void findMin(int a[], int min, int size);

int main() {

int a[5];
int min;

findMin(a, min, 5);
return 0;
}

void findMin(int a[], int min, int size) {
cout<<"Enter "<<size<<" numbers:"<<endl;
for (int i = 0; i<size; i++) {
    cin>>a[i];
}
min = a[0];
for (int i = 0; i < size; i++){
   if(a[i] < min) {
            	min = a[i];
            }
}
cout<<"The minimum element in this array is: "<<min<<endl;
}
