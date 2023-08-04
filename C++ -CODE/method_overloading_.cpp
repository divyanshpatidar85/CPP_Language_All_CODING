#include<iostream>
using namespace std;
class overlode{
    public:
    void print(){
        cout<<"It has no return type and not have parameter \n";
    }
     void print(int i,double j,char c){
        cout<<"It has no return type but  have parameters \n";
        cout<<"Intiger is =>"<<i<<endl;
        cout<<"double is =>"<<j<<endl;
        cout<<"character is  =>"<<c<<endl;
     }
};

int main(){
     overlode obj1;
     obj1.print();
     cout<<"Same function is overloading \n";
     obj1.print(5,4.8,'o');

return 0;
}