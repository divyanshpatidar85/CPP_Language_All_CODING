#include<iostream>
using namespace std;
class overlode{
    public:
    void print(){
        cout<<"It has no return type and not have parameter \n";
    }
     void print(int i,double j,char c){
        cout<<"It has no return type but  have parameters \n";
        cout<<"Intiger is =>"<<i;
        cout<<"double is =>"<<j;
        cout<<"character is  =>"<<c;
    }
    
};

int main(){
     overlode obj1;
     obj1.print();
     obj1.(5,4.8,'o');

return 0;
}