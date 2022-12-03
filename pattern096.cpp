#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int i, j, k;
    for (i = 1; i <= n;i++)
    {
        for (j = n - 1; j >= i;j--)
        {
            cout << " ";
        }
        for (k = 1; k <= i;k++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

/*
Program 096:
OUTPUT:

    1
   22
  333
 4444
55555

*/