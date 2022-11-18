#include <iostream>

int main()
{
    int i, j;
    for (i=0 ; i<5 ; i++)
    {
        for (j=0 ; j<5 ; j++)
        {
            std::cout<<"*";  // can 'use namespace std' instead of 'std::', please check from Pattern11.cpp.
        }
        std::cout << "\n";
    }
    return 0;
}

/* 
OUTPUT:

*****
*****
*****
*****
*****

*/
