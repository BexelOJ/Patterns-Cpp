#include <iostream>

int main()
{
    int n = 5, k = 1;
        for (int i=1; i<=n; i++)
          {
            for (int j=1; j<=n;j++)
                {
                    std::cout << k++<<" ";
                }
            std::cout << "\n";
          }
    return 0;
}







