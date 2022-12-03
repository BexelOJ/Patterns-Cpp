#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i=1 ; i<=n ; i++)
        {
            for (int j=1 ; j<=n ; j++)
                {
                    cout <<(2 * (i+j) - 3)<< " ";
                }
            cout << "\n";
        }
    return 0;
}

/*
Program 017:
OUTPUT

1 3 5 7 9
3 5 7 9 11
5 7 9 11 13
7 9 11 13 15
9 11 13 15 17

*/
