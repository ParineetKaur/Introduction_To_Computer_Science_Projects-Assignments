// Question: Create a program to calculate how many times each unique integer appears in a list of integers and the count for each unique integer.

#include <iostream>
using namespace std;

int main(){
   int val[50];
   int numberAmount;
   int i;
   int num;
   int count1 = 0;
   int count2 = 0;
   do{
     cout << "How many integers do you want to input. Enter a valid number (between 1-50): ";  cin >> numberAmount;
   }while(numberAmount <= 0 || numberAmount > 50);
   cout << endl << "Enter " << numberAmount << " numbers : " << endl;
   for(i=0;i<numberAmount;i++){
     cin >> val[i];
   }
   for(i=0;i < numberAmount;i++){
       for(int j=0;j < numberAmount-i-1;j++){
           if(val[j] < val[j+1]){
               int temp = val[j];
               val[j] = val[j+1];
               val[j+1] = temp;
           }
       }
   }
   cout << endl << "N"<< "  " << "Count" << endl;
   for(i=0;i < num;i++){
       num = val[i];
       for(int j=0;j < num;j++){
         if(num==val[j]){
           count2++;
           count1 = j;
           }
       }
    cout << endl << val[i] << "\t" << count2<<endl;
    i = count1;
    count2 = 0;
   }
   return 0;
}
