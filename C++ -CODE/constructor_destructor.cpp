#include<iostream>
using namespace std;
class constructor{
    static int count;
    public:
    constructor(){
        cout<<"object =>"<<++count<<" is created \n";
    }
    ~constructor(){
        cout<<"object => "<<count--<<" is destroyed \n";
        
    }
};
int constructor::count; 
int main(){
      constructor ob1,ob2,obj3;

return 0;
}