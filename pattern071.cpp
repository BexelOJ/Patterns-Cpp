#include <iostream>
using namespace std;

int main()
{
    for (int i=1; i<=5 ; i++)
    {
        for (int j=5 ; j>=i ; j--)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

/*
Program 071:
OUTPUT:

11111
2222
333
44
5

*/