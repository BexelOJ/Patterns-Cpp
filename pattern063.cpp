#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 0; i <= n;i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout << ((i + j) % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

0
1 0
0 1 0
1 0 1 0
0 1 0 1 0

*/