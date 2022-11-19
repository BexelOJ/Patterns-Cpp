#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n1 = 0, n2 = 1, r = n1 + n2;
    for (int i=1 ; i<=5 ; i++)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout << r << " ";
            r = n1 + n2;
            n1 = n2;
            n2 = r;
        }
        cout << endl;
    }
    return 0;
}
/*
OUTPUT: Fibonacci Series

1
1 2
3 5 8
13 21 34 55
89 144 233 377 610

*/