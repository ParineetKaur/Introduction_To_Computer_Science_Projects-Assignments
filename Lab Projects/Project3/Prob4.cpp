//Question: Is the input number equal to the factorial of that number?

#include <iostream>
using namespace std;

void factarr(int a[], bool &is, int size); // Changed the fact[] to a boolean reference

int main() {
    int a[1];
    bool is;

    factarr(a, is, 1);
    return 0;
}

void factarr(int a[], bool &is, int size) {
    int i;
    int factValue = 1;
    
    cout << "Enter a number: ";
    cin >> a[i]; // Read the input number

    for (i = 1; i <= a[0]; i++) { // Changed to calculate the factorial of the input number
        factValue = factValue * i;
    }

    if (factValue == a[0]) {
        is = true;
    } else {
        is = false;
    }

    cout << "Factorial: " << is << endl;
}
