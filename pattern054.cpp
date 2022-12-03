#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x = 1;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<=i ; j++)
        {
            cout << (x - i) << " ";
            x++;
        }
        cout << endl;
    }
    return 0;
}

/*
Program 054:
OUTPUT:

1
1 2
2 3 4
4 5 6 7
7 8 9 10 11

*/