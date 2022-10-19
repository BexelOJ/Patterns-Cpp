#include <iostream>
int main()
{
    int n = 5;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n;j++)
        {
            std::cout<<(i * j)<<" ";
        }
        std::cout << "\n";
    }
    return 0;
}

