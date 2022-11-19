#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    char ch = 'A';

    for (int i=1 ; i<=n ; i++)
        {
            for (int j=1 ; j<=n ; j++)
                {
                    cout << ch<<" ";
                    if(ch<'Z')
                        ch++;
                    else
                        ch = 'A';
                }
            cout << "\n";
        }
    return 0;
}

/*
OUTPUT

A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y

*/
