#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i=1 ; i<=n ; i++)
        {
            for (int j=1 ; j<=n ; j++)
                {
                    cout <<(i + j)%2<< " ";
                }
            cout << "\n";
        }
    return 0;
}

/*
Program 018:
OUTPUT

0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0

*/
