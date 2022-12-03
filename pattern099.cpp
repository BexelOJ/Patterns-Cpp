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
                cout << j;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 099:
OUTPUT:

    5
   45
  345
 2345
12345

*/