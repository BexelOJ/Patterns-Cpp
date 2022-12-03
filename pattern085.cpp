#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1;i--)
    {
        for (int j = 1; j <= i;j++)
        {
            cout << ((i + j) % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 085:
OUTPUT:

0 1 0 1 0
0 1 0 1
0 1 0
0 1
0

*/