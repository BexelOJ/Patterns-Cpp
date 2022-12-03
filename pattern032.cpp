#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x;

    for (int i=0 ; i<n ; i++)
        {
            x = i;
            for (int j=1 ; j<=n; j++)
                {
                    x = x + n;
                    cout <<(char)(x-n+65)<<" ";
                }
            cout << "\n";
        }
    return 0;
}

/*
Program 032:
OUTPUT

A F K P U
B G L Q V
C H M R W
D I N S X
E J O T Y

*/
