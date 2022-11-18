#include <iostream>
using namespace std;

int main()
{
    int n = 5, k = 1;
    for (int i = n; i >= 1;i--)
    {
        for (int j = 1; j <= i;j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

1 2 3 4 5
6 7 8 9
10 11 12
13 14
15

*/