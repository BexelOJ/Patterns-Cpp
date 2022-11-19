#include <iostream>
using namespace std;

int main()
{
    int d1 = 1;
    int n = 4;
    int d2 = (n * n) + 1;
    for (int i = n; i >= 1;i--)
    {
        for (int k = 1; k <= i;k++)
        {
            cout << d2 << " ";
            d2++;
        }
        d2--;
        d2 = d2 - ((i - 1) * 2);
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

17 18 19 20
14 15 16
12 13
11

*/