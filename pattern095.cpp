#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i, j;
    for (i = 1; i <= n;i++)
    {
        for (j = n - 1; j >= i;j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i;k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 095:
OUTPUT:

    *
   **
  ***
 ****
*****

*/