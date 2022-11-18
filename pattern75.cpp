#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=n-i+1 ; j++)
        {
            cout << (n - j + i) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

5 4 3 2 1
6 5 4 3
7 6 5
8 7
9

*/