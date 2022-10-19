#include <iostream>

int main()
{
    int x=2;
    int n=5;

    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=i; j--)
        {
            std::cout <<x<<" ";
            x=x+2;
        }
        std::cout<<"\n";
    }
    return 0;
}






