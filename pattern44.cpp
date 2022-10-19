#include <iostream>

int main()
{
    int i,j,k=0;
    int n=4;

    for(int i=1;i<=n;i++)
    {
        k = k + i;
        for(int j=k;j>k-i;j--)
        {
            std::cout <<j<<" ";
        }
        std::cout<<"\n";
    }
    //return 0;
}






