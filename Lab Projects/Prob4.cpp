#include <iostream>
#include <cmath>
using namespace std;

void factarr(int a[], bool fact[], int size);

int main() {

int a[1];
bool fact[2];

factarr(a, fact, 1);
return 0;
}

void factarr(int a[], bool fact[], int size) {
  bool is;
  int i;
  int factValue = 1;
  cout<<"Enter "<<size<<" number:"<<endl;
  cin>>a[i];
  for(i=0; i<size+1; i++) {
    factValue = factValue*1;
    if(factValue==size) {
      is = true;
    }
    else {
      is = false;
    }
  }
cout<<"Factorial: "<<is<<endl;
}
