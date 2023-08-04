#include<iostream>
using namespace std;
class Constructor{
    int cons_var;
    public:
    Constructor(int a){
        cons_var=a;
    }
    Constructor(Constructor & copy){
        cout<<"This called from constructor copy"<<endl;
        cons_var=copy.cons_var;
    }
    void display(){
        cout<<"the value of a is : "<< cons_var;
    }
};
int main(){
    Constructor c1(4),c2(5);
    Constructor C4(c1);
    C4.display();

    

return 0;
}