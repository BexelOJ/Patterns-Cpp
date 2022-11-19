#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cout <<(char)(i+j+65) << " ";
             }
            cout << "\n";
        }
    return 0;
}

/*
OUTPUT

A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

*/
