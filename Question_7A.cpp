#include <iostream>
using namespace std;

int main()
{
  int i;
  int l;
  for (i=1; i<=5; i++)
  {
    for (l=0; l<=9; l++)
    {
      if (l==0)
        cout << "start";
      else if (l<=i)
        cout << "o";
      else if (l==9)
        cout << "end";
      else
        cout << "x";
    }
  }
    return 0;
}
