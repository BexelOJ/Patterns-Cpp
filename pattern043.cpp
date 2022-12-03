#include <iostream>
using namespace std;

int main()
{
    int n=5,t;

    for(int i=1 ; i<=n ; i++)
    {
        t = i - 1;
        for(int j=1 ; j<=i ; j++)
        {
            cout <<t+i<<" ";
            t = t + 2;
        }
        cout<<endl;
    }
    return 0;
}

/*
Program 043:
OUTPUT

1
3 5
5 7 9
7 9 11 13
9 11 13 15 17

*/
