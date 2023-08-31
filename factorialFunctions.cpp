#include <iostream>
using namespace std;

int factorialValue(int num){
  int fact = 1;
  for(int i=1; i<=num; i++){
    fact = fact*i;
  }
  return fact;
}
int main(){
  int num;
  cout<<"Enter a number: ";
  cin >> num;
  int ans = factorialValue(num);
  cout<<ans<<endl;
  return 0;
}
