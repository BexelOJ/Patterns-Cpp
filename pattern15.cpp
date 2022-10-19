#include <iostream>

int main()
{
    int n = 5;

    int x, y;

    for (int i = 1; i <= n; i++)
    {
        x = i;
        y = n - i + 1;

        for (int j = 1; j <=n; j++)
        {
            if(j%2 == 0)
            {
                std::cout << x << " ";
            }
            else
            {
                std::cout << y << " ";
            }
            x = x + n;
            y = y + n;
        }
        std::cout << "\n";
    }
    return 0;
}


