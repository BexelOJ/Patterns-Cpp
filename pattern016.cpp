#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i=1 ; i<=n ; i++)
        {
            for (int j=1; j<=n ; j++)
                {
                    cout <<(i + j - 1)<< " ";
                }
            cout << "\n";
        }
    return 0;
}

/*
OUTPUT

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9

*/
