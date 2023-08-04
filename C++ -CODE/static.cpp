#include<iostream>
// this program for the statics data member 
using namespace std;
class ram {
    static int a;
    int id;
    public:
    void get_id(){
        cout<<"Enter the id of your employee \n";
        cin>>id;
        cout<<endl;
        a++;
    }
    void get_out(){
        cout<<"Your empolyee "<<a<<"id is  "<<id;
        cout<<endl;
    }
};
int ram :: a=100;
int main(){
    ram d,p,k;
    d.get_id();
    d.get_out();
    p.get_id();
    p.get_out();
    k.get_id();
    k.get_out();

}