#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x;

    for(int i=1 ; i<=n ; i++)
    {
        x = i;
        for(int j=1 ; j<=n ; j++)
        {
            cout<<x<<" ";
            x = x + n; 
        }
        cout << "\n";
    }
    return 0;
}

/*
OUTPUT:

1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25

*/
