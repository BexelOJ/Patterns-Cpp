#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int fN = 0, sN = 1, res = 0;
    int n = 5;
    for (int i=1 ; i<=n ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            fN = sN;
            sN = res;
            cout << res << " ";
            res = fN + sN;
        }
        fN = 0;
        sN = 1;
        res = 0;
        cout << endl;
    }
    return 0;
}

/*
Program 058:
OUTPUT: Fibonacci pyramid

0
0 1
0 1 1
0 1 1 2
0 1 1 2 3

*/