#include <iostream>
using namespace std;

int main()
{
    for (int i=5 ; i>=1 ; i--)
    {
        for (int j=1 ; j<=i ; j++)
        {
            cout << i;
        }
        cout << endl;
        ;
    }
    return 0;
}

/*
Program 073:
OUTPUT:

12345
1234
123
12
1

*/