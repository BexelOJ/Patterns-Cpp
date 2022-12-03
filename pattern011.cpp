#include <iostream>
using namespace std;   // instead of using 'std::cout', use only 'cout', by using 'using namespace std' before main function.

int main()
{

    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=3 ; j++)
        {
            cout<<i<<" "<<j<<" ";
        }
        cout << "\n";
    }
    return 0;
}

/*
Program 011:
OUTPUT:

1 1 1 2 1 3
2 1 2 2 2 3
3 1 3 2 3 3
4 1 4 2 4 3
5 1 5 2 5 3

*/
