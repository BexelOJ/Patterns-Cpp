#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<=i ; j++)
        {
            cout << (j % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 062:
OUTPUT:

0
0 1
0 1 0
0 1 0 1
0 1 0 1 0
0 1 0 1 0 1

*/