#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout << (i % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 059:
OUTPUT:

1
0 0
1 1 1
0 0 0 0
1 1 1 1 1

*/