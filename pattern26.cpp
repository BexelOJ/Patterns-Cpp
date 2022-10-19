#include <iostream>

int main()
{
    int n = 5;

    for (int i = 'A'; i <='E'; i++)
        {
            for (int j = 'A'; j<='E'; j++)
                {
                    std::cout << char(i)<<" ";
                }
            std::cout << "\n";
        }
    return 0;
}


