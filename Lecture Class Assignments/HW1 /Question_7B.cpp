#include <iostream>
using namespace std;

int main()
{
  int a=7;
  int b;
  int c;
  for (b=1; b<=5; b++)
    {
      a = a+3;
      for (c=6; c>=0; c--)
      {
        if (c == 6)
          cout << "start";
        else if (c > 0)
          cout <<a<<" "<<c<<",";
        else
          cout << "end/n";

      }
    }
    return 0;
}
