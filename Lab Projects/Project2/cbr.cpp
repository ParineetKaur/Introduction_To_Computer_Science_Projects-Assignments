//Question: What is the maximum value entered by the user, and what is the average of the values entered?

#include<iostream>
using namespace std;

double maxAverage(double& max, double& average);
int main(){
  double max;
  double average;
  maxAverage(max,average);
  return 0;
}

double maxAverage(double& max, double& average){
  double val = 0;
  double total = 0;
  double count = 0;


  cout<<"Please enter a value, or -1 when you're done."<<endl;
  cin>>val;
  while(val!=-1){
    total+=val;
    count++;
    if(val>max){
      max = val;
      cout << "The value for max is " << max << endl;
      average = total/count;
      cout << average << endl;
    cout<<"Please enter a value, or -1 when you're done."<<endl;
    cin>>val;
  }
  }
  return average;
  return max;
}
