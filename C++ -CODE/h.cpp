#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printdata(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout << a << "+" << b << "i";
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(2, 3);
    c2.setdata(3, 4);
    c3.printdata(c1, c2);

}