#include <iostream>

int main()
{
    int n = 5;
    int x=1;
    int y = n;
    int t1, t2,r1,r2;
       

    for(int i=n; i>=1; i--)
    {
        t1=x;
        t2 = y;
        r1 = i;
        r2 = i + 1;

        for(int j=n; j>=i; j--)
        {
            if((i+j)%2==0)
            {
                std::cout << t1 << " ";
            }
            else
            {
                std::cout << t2 << " ";
            }
            t1 = t1 - r1++;
            t2 = t2 - r2++;
        }
            y = y + i - 1;
            x = x + i;
            std::cout << "\n";
        }
    return 0;
}






