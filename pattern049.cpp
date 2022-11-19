#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int x=1;
    int y = n;
    int t1, t2,r1,r2;
       

    for(int i=n; i>=1; i--)
    {
        t1=x;
        t2 = y;
        r1 = i;
        r2 = i + 1;

        for(int j=n ; j>=i ; j--)
        {
            if((i+j)%2==0)
            {
                cout << t1 << " ";
            }
            else
            {
                cout << t2 << " ";
            }
            t1 = t1 - r1++;
            t2 = t2 - r2++;
        }
            y = y + i - 1;
            x = x + i;
            cout << "\n";
        }
    return 0;
}

/*
OUTPUT

1
9 2
10 8 3
14 11 7 4
15 13 12 6 5

*/
