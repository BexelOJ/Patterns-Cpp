#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int px;
    for (int i=1 ; i<=n ; i++)
    {
        px = 1;
        for (int j=1 ; j<=i ; j++)
        {
            cout << px << " ";
            px = px * (i - j) / j;
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT:

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

*/
