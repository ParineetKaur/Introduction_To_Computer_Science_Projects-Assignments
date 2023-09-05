// Question: Write a program to perform addition and multiplication operations on two fractions, where each fraction has a numerator and a denominator, and then print the results.

#include <cstdlib>
#include <iostream>
using namespace std;

struct Fraction{
  int numerator;
  int denominator;
};

void printFraction(Fraction f){
  cout << f.numerator << "/" << f.denominator;
}

Fraction add(Fraction f1, Fraction f2){
  Fraction result;
  result.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
  result.denominator = f1.denominator * f2.denominator;
  return result;
}

Fraction mult(Fraction f1, Fraction f2){
  Fraction result;
  result.numerator = f1.numerator * f2.numerator;
  result.denominator = f2.denominator * f2. denominator;
  return result;
}

int main(){
  Fraction sum, product;
  Fraction f1;
  Fraction f2;
  cout << "Enter the numerator of the first fraction: ";
  cin >> f1.numerator;
  cout << "Enter the denominator of the first fraction: ";
  cin >> f1.denominator;
  cout << "Enter the numerator of the second fraction: ";
  cin >> f2.numerator;
  cout << "Enter the denominator of the second fraction: ";
  cin >> f2.denominator;
  cout << endl;
  cout << "Fraction 1 = ";
  printFraction(f2);
  cout << endl;
  cout << "Fraction 2 = ";
  printFraction(f2);
  cout << endl;
  cout << endl;
  sum = add(f1, f2);
  printFraction(f1);
  cout << " + ";
  printFraction(f2);
  cout << " = ";
  printFraction(sum);
  cout << endl;
  product = mult(f1, f2);
  printFraction(f1);
  cout << " * ";
  printFraction(f2);
  cout << " = ";
  printFraction(product);
  cout << endl;
  return 0;
}
