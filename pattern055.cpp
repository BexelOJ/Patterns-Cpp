#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int x = 1;
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout << (x * x) << " ";
            x++;
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

1
4 9
16 25 36
49 64 81 100

*/