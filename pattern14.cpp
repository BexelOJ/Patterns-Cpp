#include <iostream>

int main()
{
    int n = 5;
    int x;

    for (int i = 1; i <= n; i++)
    {
        x = n - i + 1;
        for (int j = 1; j <= n; j++)
        {
            std::cout << x << " ";
            x = x + n;
        }
        std::cout << "\n";
    }
    return 0;
}



