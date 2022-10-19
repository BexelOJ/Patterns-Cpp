#include <iostream>

int main()
{
    int n = 5;

    char ch = 'A';

    for (int i = 1; i<=n; i++)
        {
            for (int j = 1; j<=n; j++)
                {
                    std::cout << ch<<" ";
                    if(ch<'Z')
                        ch++;
                    else
                        ch = 'A';
                }
            std::cout << "\n";
        }
    return 0;
}


