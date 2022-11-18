#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for(int i=n ; i>=1 ; i--)
    {
        for(int j=i ; j<=n ; j++)
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
4 5
3 4 5
2 3 4 5
1 2 3 4 5

*/
