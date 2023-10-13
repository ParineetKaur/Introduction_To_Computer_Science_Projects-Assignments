//Question: What are the possible genotypes of the offspring when you know the genotypes of the mother and father?

#include <iostream>
using namespace std;
int main()
{
char mother1;
char mother2;
char father1;
char father2;
cout << "Enter the first letter of the genotype for the mother: ";
cout << "Enter the second letter of the genotype for the mother: ";
cout << "Enter the first letter of the genotype for the father: ";
cout << "Enter the second letter of the genotype for the father: ";
cin >> mother1;
cin >> mother2;
cin >> father1;
cin >> father2;

if (mother1 == 'G' && mother2 == 'G' && father1 == 'G' && father2 == 'G')
    cout << "GG - 100% ; Gg - 0% ; gg - 0%";
else if (mother1 == 'g' && mother2 == 'g' && father1 == 'g' && father2 == 'g')
    cout << "gg - 100% ; GG - 0% ; Gg - 0%";
else if (mother1 == 'G' && mother2 == 'g' && father1 == 'G' && father2 == 'g')
    cout << "Gg - 25% ; GG - 50% ; gg - 25%";
else if (mother1 == 'G' && mother2 == 'g' && father1 == 'G' && father2 == 'G')
    cout << "GG - 50% ; Gg - 50% , gg - 0%";
else if (mother1 == 'g' && mother2 == 'g' && father1 == 'G' && father2 == 'g')
    cout << "GG - 0% ; Gg - 50% , gg - 25% ";
else
    cout << "Unknown Genotype(s)!";
}
