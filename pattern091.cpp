#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n;i++)
    {
        for (int j = n - i; j >= 0;j--)
        {
            cout << (char)(j + 65)<<" ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 091:
OUTPUT:

E D C B A
D C B A
C B A
B A
A

*/