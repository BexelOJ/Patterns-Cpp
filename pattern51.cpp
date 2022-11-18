#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int x=(n*(n+1)/2);
    for(int i=n ; i>=1 ; i--)
    {
        for(int j=n ; j>=i ; j--)
        {
            cout<<x--<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
OUTPUT:

15
14 13
12 11 10
9 8 7 6
5 4 3 2 1

*/
