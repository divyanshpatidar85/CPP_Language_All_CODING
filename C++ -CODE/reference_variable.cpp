#include <iostream>
using namespace std;


int main()
{
    int x = 89;
    // int *y=&x;
    // *y=*y+10;
    int &y = x;
    y = y + 10;
    // both commented and uncommented line work as same
    cout << x;
    return 0;
}