#include<iostream>
using namespace std;
class complex ;
class complex2
{
    public:
    int sumcomplex(complex ,complex );
      //  a=a1.a+a2.a;
    
    
};
class complex{
    int a,b;
    friend int complex2 :: sumcomplex(complex ,complex );
    public:
    void set_data(int o1,int o2){
          a=o1;
          b=o2;
    }
};
int complex2::sumcomplex(complex a1,complex a2){
 
}

int main(){
  complex c1,c2;
     complex2 c3;
    c1.set_data(1,0);
    c2.set_data(3,0);
   c3.sumcomplex(c1,c2);
}

