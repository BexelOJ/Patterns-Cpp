#include <iostream>
using namespace std;

int main()
{
    //int i, j;
    int n=5;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout <<j*2<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT

2
2 4
2 4 6
2 4 6 8
2 4 6 8 10

*/
