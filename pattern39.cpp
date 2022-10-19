#include <iostream>

int main()
{
    int n=5;

    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            std::cout << j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}






