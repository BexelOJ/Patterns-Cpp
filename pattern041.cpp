#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n=1;

    for(int i=1 ; i<=4 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout <<n<<" ";
            n++;
        }
        cout<<"\n";
    }
    return 0;
}

/*
OUTPUT

1
2 3
4 5 6
7 8 9 10 

*/
