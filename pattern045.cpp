#include <iostream>
using namespace std;

int main()
{
    int x=1;
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
Program 045:
OUTPUT

1
3 5
7 9 11
13 15 17 19
21 23 25 27 29

*/
