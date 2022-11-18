#include <iostream>
using namespace std;

int main()
{
    int x=1;
    int n=5;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            using namespace std;
            cout <<(i*j)<<" ";
            x=x+2;
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT

1 
2 4
3 6 9
4 8 12 16
5 10 15 20 25

*/
