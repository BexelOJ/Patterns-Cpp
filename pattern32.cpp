#include <iostream>

int main()
{
    int n = 5;
    int x;

    for (int i = 0; i<n; i++)
        {
            x = i;
            for (int j = 1; j<=n; j++)
                {
                    x = x + n;
                    std::cout <<(char)(x-n+65)<<" ";
                }
            std::cout << "\n";
        }
    return 0;
}


