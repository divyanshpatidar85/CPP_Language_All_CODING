// Array of any class for same type of object
/* Static function = ko main se is type se call karenge main se -->class Name :: function_name();
static function class ke name par hi run ho jata hai
*/
#include<iostream>
using namespace std;
class Shop{
    int shop_item_id[100];
    float shop_item_price[100];
    int counter=0;
    public:
        void set_data(){
            cout<<"Entre the Id and Price of " <<counter+1<<" an item respectively"<<endl;
            cin>>shop_item_id[counter]>>shop_item_price[counter];
            
            counter++;
        }
        void show_Id_price(){
            for(int i=0;i<counter;i++){
                cout<<"Item "<<i+1<<" Id is : "<<shop_item_id[i]<<" Price is : "<<shop_item_price[i]<<endl;
            }
        }
};
 int main()  {
    Shop s1;
    s1.set_data();
    s1.set_data();
    s1.set_data();
    s1.set_data();
    s1.show_Id_price();


 return 0; 
 }
 //output
 /*Entre the Id and Price of 1 an item respectively
1
2
Entre the Id and Price of 2 an item respectively
2
2
Entre the Id and Price of 3 an item respectively
3
2
Entre the Id and Price of 4 an item respectively
4
2
Item 1 Id is : 1 Price is : 2
Item 2 Id is : 2 Price is : 2
Item 3 Id is : 3 Price is : 2
Item 4 Id is : 4 Price is : 2
*/