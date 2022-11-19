#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i= n; i >= 1; i--)
    {
        for (int j = i; j <= (2*i-1);j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

5 6 7 8 9
4 5 6 7
3 4 5
2 3
1

*/