#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i=1 ; i<=n ; i++)
    {
        int k = i;
        for (int j=1 ; j<=i ; j++)
        {
            cout << k << " ";
            k=k+(n-j);
        }
        cout << endl;
    }
    return 0;
}

/*
Program 056:
OUTPUT:

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

*/