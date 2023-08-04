#include<iostream>
using namespace std;
class complex{
    float real,imag;
    public:
    complex(){
        cout<<"Enter Real Part : ";
        cin>>real;
         cout<<" \nEnter imajnary Part : ";
        cin>>imag;
    }
    complex operator +(complex obj);
    complex operator -(complex obj);
    complex operator *(complex obj);
};
complex complex :: operator +(complex obj){
    complex temp;
    temp.real=real +obj.real;
    temp.imag=imag+obj.imag;
    return obj;
}
complex complex :: operator -(complex obj){
    complex temp;
    temp.real=real -obj.real;
    temp.imag=imag-obj.imag;
    return obj;
}
complex complex :: operator +(complex obj){
    complex temp;
    temp.real=((real *obj.real)-(imag*obj.imag));
    temp.imag=((real*obj.imag)+(imag*obj.real);
    return obj;
}
int main(){

return 0;
}