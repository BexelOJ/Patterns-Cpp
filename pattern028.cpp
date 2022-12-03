#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 'E'; i >= 'A'; i--)
    {
        for (int j = 'E'; j >= 'A'; j--)
        {
            cout << char(i) << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
Program 028:
OUTPUT

E E E E E
D D D D D
C C C C C
B B B B B
A A A A A

*/
