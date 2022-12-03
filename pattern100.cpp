#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n;i++)
    {
        for (int j = n; j >= 1;j--)
        {
            if(i>=j)
                cout << j;
            else
                cout << " ";
        }
    cout << endl;
    }
return 0;
}

/*
Program 100:
OUTPUT:

    1
   21
  321
 4321
54321

*/