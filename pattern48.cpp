#include <iostream>

int main()
{
    int x=1,y,t;
    int n=5;

    for(int i=n; i>=1; i--)
    {
        y = i;
        t = x;
        for(int j=n; j>=i; j--)
        {
            std::cout <<t<<" ";
            t = t - y;
            y++;
        }
        x = x + i;
        std::cout<<"\n";
    }
    return 0;
}






