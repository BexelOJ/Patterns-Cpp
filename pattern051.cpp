<<<<<<< HEAD
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
Program 051:
OUTPUT:

15
14 13
12 11 10
9 8 7 6
5 4 3 2 1

*/
=======
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
>>>>>>> f8518c893e4715be85dcbda0345d712830d893a2
