#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int x = n, y, t;
    for (int i=n; i>=1 ; i--)
    {
        t = x;
        y = i + 1;
        for (int j=n ; j>=i ; j--)
        {
            cout << t << " ";
            t = t - y;
            y++;
        }
        x = x + i - 1;
        cout<<endl;
    }
    return 0;
}

/*
Program 052:
OUTPUT:

15
14 13
12 11 10
9 8 7 6
5 4 3 2 1

*/