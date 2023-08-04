#include <iostream>
using namespace std;
class Complex;
class Sum_complex
{
    int real_sum;
    int imaznary_sum;

public:
    void sum_of_complexNum(Complex &, Complex &);
};
class Complex
{
    int real_part;
    int imazanary_part;

public:
    friend class Sum_complex;
    void set_data(int a, int b)
    {
        real_part = a;
        imazanary_part = b;
    }
    void printdata(){
        cout<<"real part is that: "<<real_part<<endl;
         cout<<"imazanry part is that: "<<imazanary_part<<endl;
    }
};
void Sum_complex ::sum_of_complexNum(Complex & a, Complex & b)
{
    // real_sum = a.real_part + b.real_part;
    // imaznary_sum = a.imazanary_part + b.imazanary_part;
    // cout << "Sum of complex number is : " << real_sum << " + (" << imaznary_sum << "i)";
    a.imazanary_part=10000;
    a.real_part=2;
}
int main()
{
    Complex firstnum, secondnum;
    Sum_complex sumcomplex;
    firstnum.set_data(1, 2);
    secondnum.set_data(3, -4);
    sumcomplex.sum_of_complexNum(firstnum, secondnum);
    firstnum.printdata()

    return 0;
}