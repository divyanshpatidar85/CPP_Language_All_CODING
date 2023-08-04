#include <iostream>
using namespace std;
class Shop
{
    int iteam_id[100];
    string iteam_name[100];

public:
    int no=0;
    void get_itemid();
    void counter(){
        no=0;
    };
    void get_name();
    void display();
};

void Shop::get_name()
{
    cout << "Enter the name of item \n";
    cin >> iteam_name[no];
    no=no+1;
}
void Shop::get_itemid()
{
    cout << "Enter item id \n";
    cin >> iteam_id[no];
    get_name();
}
void Shop::display()
{
    for(int i=0;i<no;i++){
    cout << "The iteam id is \n " << iteam_id[0] << "\n iteam name is \n " << iteam_name[0];
    }
}
int main()
{
    Shop fs;
    fs.counter();
    fs.get_itemid();

    //  fs.get_name();
    fs.display();
}