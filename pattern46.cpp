#include <iostream>
using namespace std;

int main()
{
    int x=2;
    int n=5;

    for(int i=n ; i>=1 ; i--)
    {
        for(int j=n ; j>=i ; j--)
        {
            cout <<x<<" ";
            x=x+2;
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT

2
4 6
8 10 12
14 16 18 20
22 24 26 28 30

*/
