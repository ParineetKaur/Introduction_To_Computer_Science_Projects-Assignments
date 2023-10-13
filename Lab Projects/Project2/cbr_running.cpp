#include <iostream>
using namespace std;
void beans(int y, int& n, int size);
void spam(int& n, int& y);
int main(){
  int m = 7;
  int n = 4;
  cout<<"m is "<<m<<" n is "<<n<<" size is "endl;
  beans(n, m, 3);
  cout<<"m is "<<m<<" n is "<<n<<endl;
  spam(m, n);
  cout<<"m is "<<m<<" n is "<<n<<endl;
  spam(n, n);
  cout<<"m is "<<m<<" n is "<<n<<endl;
  //beans(m, 2, n); changed to beans(m, n, 2);
  beans(m, n, 2);
  cout<<"m is "<<m<<" n is "<<n<<endl;
}

void beans(int y, int& n, int size) {
  y = n+size;
  n = 7+n;
}
void spam(int& n, int& y){
  int m = n+y;
  y=n;
  n=y+n;
}
