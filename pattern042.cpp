#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= i;j++)
        {
            cout << (i + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 042:
OUTPUT

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/