#include <iostream>

int main()
{
    int x=1;
    int n=5;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            std::cout <<(i*j)<<" ";
            x=x+2;
        }
        std::cout<<"\n";
    }
    return 0;
}






