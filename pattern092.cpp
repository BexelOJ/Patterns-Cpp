#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= n-i+1;j++)
        {
            cout << (char)(n - j + i + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Program 092:
OUTPUT:

E D C B A
F E D C
G F E
H G
I

*/