#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    for (int i=1 ; i<n ; i++)
    {
        for (int j=0 ; j<i ; j++)
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