#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int x;

    for (int i=1 ; i<=n ; i++)
        {
            x = n - i;
            for (int j=1 ; j<=n ; j++)
                {
                    cout <<(char)(x+65)<<" ";
                    x = x + n;
                }
            cout << "\n";
        }
    return 0;
}

/*
Program 033:
OUTPUT

E J O T Y
D I N S X
C H M R W
B G L Q V
A F K P U

*/
