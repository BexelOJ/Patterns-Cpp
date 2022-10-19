#include <iostream>

int main()
{
    int n = 5;

    for (int i = 1; i <=n; i++)
        {
            for (int j = 0; j<n; j++)
                {
                    std::cout <<(j%2)<< " ";
                }
            std::cout << "\n";
        }
    return 0;
}


