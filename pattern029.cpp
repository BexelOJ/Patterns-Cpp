#include <iostream>
using namespace std;

int main()
{
    int i,j;

    for (int i='E'; i>='A' ; i--)
        {
            for (int j='E' ; j>='A' ; j--)
                {
                    cout << char(j)<<" ";
                }
            cout << "\n";
        }
    return 0;
}

/*
Program 029:
OUTPUT

E D C B A
E D C B A
E D C B A
E D C B A
E D C B A

*/
