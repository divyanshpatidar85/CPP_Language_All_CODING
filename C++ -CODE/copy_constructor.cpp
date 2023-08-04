#include<iostream>
using namespace std;
class A{
int x;
public:
A(int b){
    x=b;
}
A(A &d){
 d.display();
 x=d.x;
}
void display(){
    cout<<"ans is "<<x<<endl;
}
};
int main(){
    A n(4);
    n.display();
    A f(n);
    f.display();
return 0;
}