#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int k;
    for (int i = n; i >= 1;i--)
    {
        k = i;
        for (int j = 1; j <= i;j++)
        {
            cout << k << " ";
            k = k + (n - j);
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

5 9 12 14 15
4 8 11 13
3 7 10
2 6
1

*/