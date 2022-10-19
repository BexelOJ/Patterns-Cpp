#include <iostream>

int main()
{
    //int i, j;
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout <<j*2<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}






