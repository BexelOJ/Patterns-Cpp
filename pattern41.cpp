#include <iostream>

int main()
{
    int i, j;
    int n=1;

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout <<n<<" ";
            n++;
        }
        std::cout<<"\n";
    }
    return 0;
}






