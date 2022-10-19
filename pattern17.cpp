#include <iostream>

int main()
{
    int n = 5;

    for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=n; j++)
                {
                    std::cout <<(2 * (i+j) - 3)<< " ";
                }
            std::cout << "\n";
        }
    return 0;
}


