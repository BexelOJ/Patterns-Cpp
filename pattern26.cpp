#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i='A' ; i<='E' ; i++)
        {
            for (int j='A' ; j<='E' ; j++)
                {
                    cout << char(i)<<" ";
                }
            cout << "\n";
        }
    return 0;
}

/*
OUTPUT

A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

*/
