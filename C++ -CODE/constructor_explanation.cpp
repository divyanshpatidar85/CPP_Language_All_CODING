#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
Complex(){}; // In this explicit call this curly bracket is important without you get an error ......as spend lot of time
    Complex(int p, int q){
        a=p;
        b=q;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};


int main(){
    // Implicit call
    // cout<<"hi";
     Complex ayy11;
     int c=22,d=03;
   cout<<"hi";
    ayy11 = Complex(c,d);
    
    ayy11.printNumber();

    // Explicit call


    return 0;
}