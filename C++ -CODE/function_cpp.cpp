#include <iostream>
using namespace std;
inline int printdata(int c, int d)
{
    return c * d;
}
int main()
{
    int a, b, c;
    cout << "Enetr the value of a and b" << endl;
    cin >> a >> b;
    c = printdata(a, b);
    cout << "Product of a and b : " << c;
    return 0;
}