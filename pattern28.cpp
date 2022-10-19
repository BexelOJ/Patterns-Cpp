#include <iostream>

int main()
{
    int n = 5;

    for (int i = 'E'; i >= 'A'; i--)
    {
        for (int j = 'E'; j >= 'A'; j--)
        {
            std::cout << char(i) << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
