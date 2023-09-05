//Question: Correct the issues and irregularities in the algorithm. 
//The corrections (i.e. the answers) have been provided in the comments on each line. 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
double a, b, c;
//Here, we had initilaized b to be 2. However, this is unnecessary as b is being calculated on Line 13. It creates two values for b.
cout<<"Enter length of hypotenuse"<<endl;
cin >> c;
cout << "Enter length of a side" << endl; // Here, the cout symbol was not coded correctly (i.e. it was shown as '>>', which is the cin symbol).
cin >> a; //An endl was not necessary here.
double intermediate = pow(c, 2)-pow(a, 2);
b = sqrt(intermediate);
cout << "Length of other side is: "<<b<<endl; // Here, the coder forgot to add '<<', which will add the value of b in the string we are outputting. If we do not do so, the value of b will not print and the system will show an error.
return 0;
}
