//What are the values of variables a, b, and c at different points in the program execution, and how do these values change as the program runs?

#include <iostream>
using namespace std;
int fun(int c, int b);
int main(){
  int a = 0;
  int b = 5;
  int c = 10;
  cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
  b=fun(a, c);
  cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
  while(b==21){
    int a = 3;
    b = a;
    cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
  }
  cout<<"a is: "<<a<<" b is: "<<b<<" c is: "<<c<<endl;
  return 0;
}
int fun(int c, int b){
  b = 2*b;
  c = b+1;
  cout<<cout<<"b is: "<<b<<" c is: "<<c<<endl;
  return c;
}
