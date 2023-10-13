// Question: What are the factors of a positive number, and whether each number up to the given positive number is a factor or not?

#include <iostream>
using namespace std;
void factors(int n, int facts[]);

int main() {

int facts[50];
int n = 0;

cout<<"Enter a positive number: "<<endl;
cin>>n;
if(n>=50) {
  cout<<"Sorry,can't test numbers that high!"<<endl;
}
else {
  factors(n, facts);
}
return 0;
}

void factors(int n, int facts[]) {
  bool a;
  for(int i=1; i<=n; i++) {
    std::cout<<"n mod i "<<n%i << '\n';
    if(n%i==0) {
      a=true;
      cout<<i<<":"<<a<<endl;
    }
    else {
      a=false;
      cout<<i<<":"<<a<<endl;
    }
  }
}
