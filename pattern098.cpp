#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1;i--)
    {
        for (int j = 1; j <= n;j++)
        {
            if(i<=j)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 098:
OUTPUT:

    5
   44
  333
 2222
11111

*/