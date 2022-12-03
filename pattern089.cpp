#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 4; i >= 0;i--)
    {
        for (j = 0; j <= i;j++)
        {
            cout << (char)(i + 65);
        }
        cout << endl;
    }
    return 0;
}

/*
Program 089:
OUTPUT:

EEEEE
DDDD
CCC
BB
A

*/