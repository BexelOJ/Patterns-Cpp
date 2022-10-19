#include <iostream>

int main()
{
    int n = 5;

    for (int i = 0; i<n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout <<(char)(i+j+65) << " ";
             }
            std::cout << "\n";
        }
    return 0;
}


