#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << (i % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 082:
OUTPUT:

0 0 0 0 0
1 1 1 1
0 0 0
1 1
0

*/