#include <iostream>

int main()
{
    int n = 5;

    for (int i = 0; i<n; i++)
        {
            for (int j = 1; j<=n; j++)
                {
                    std::cout <<(i%2)<< " ";
                }
            std::cout << "\n";
        }
    return 0;
}


