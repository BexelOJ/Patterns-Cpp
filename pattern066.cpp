#include <iostream>
using namespace std;

int main()
{
    char i, j;
    for(int i='A' ; i<='E' ; i++)
    {
        for (int j='A' ; j<=i ; j++)
        {
            cout << char(j)<<" ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 066:
OUTPUT:

A
A B
A B C
A B C D
A B C D E

*/