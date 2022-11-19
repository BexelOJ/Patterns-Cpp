#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for(int i=n ; i>=1 ; i--)
    {
        for(int j=n ; j>=i ; j--)
        {
            cout <<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*/
