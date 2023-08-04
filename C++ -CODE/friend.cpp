#include<bits/stdc++.h>
using namespace std;
class Complex {
    int real,imajanary;
    public:
    void set_val();
    friend void results(Complex);
};
void Complex::set_val(){
    cout<<"enter real part";
    cin>>real;
    cout<<"enter imajanary part";
    cin>>imajanary;
}
void results(Complex d){
cout<<d.real;
cout<<d.imajanary;
}

int main(){
    Complex c1;
    c1.set_val();
    results(c1);

}