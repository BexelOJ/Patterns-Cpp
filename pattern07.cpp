#include <iostream>

int main()
{
    int n = 5;
    int x = 1;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 1; j <= n;j++)
        {
            std::cout << x << " ";
            x = x + 2;
        }
       // cout << endl;
        std::cout << "\n";
    }
    return 0;
}


