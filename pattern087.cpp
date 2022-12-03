#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (int i = 0; i <= 4;i++)
    {
        for (int j = 4; j >= i;j--)
        {
            cout << (char)(i + 65);
        }
        cout << endl;
    }
}

/*
Program 087:
OUTPUT:

AAAAA
BBBB
CCC
DD
E

*/