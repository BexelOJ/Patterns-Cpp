#include <iostream>

int main()
{
    int i,j;

    for (int i = 'E'; i>='A'; i--)
        {
            for (int j = 'E'; j>='A'; j--)
                {
                    std::cout << char(j)<<" ";
                }
            std::cout << "\n";
        }
    return 0;
}


