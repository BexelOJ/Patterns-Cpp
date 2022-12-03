#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 'A'; i <='E'; i++)
        {
            for (int j = 'A'; j<='E'; j++)
                {
                    cout << char(j)<<" ";
                }
            cout << "\n";
        }
    return 0;
}

/*
Program 027:
OUTPUT

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/
