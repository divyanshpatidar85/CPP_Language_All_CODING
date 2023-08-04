#include <iostream>
#include <cstring>
using namespace std;
class Binary {
    string s;
    int m;

    public:
    void get_input() {
        cout << "Entre a binary number" << endl;
        cin >> s;
        m=s.length();
     //
     
       // cout<<m;
       
    }
        
    void chek_binary() {
        
        int i = 0;
        while (s.at(i) !='\0') { 
            if (s.at(i) != '0' && s.at(i) != '1') {
                cout << "invalid binary " << endl;
                exit(0);
            }
              i++;
            if((i)==m) {
                break;
            
            }
            
          

        }
    }
    
    void compliment() {
        
        chek_binary(); 
        int l = 0, j = 0;
        while (s.at(l) !='\0') {
            if (s.at(l) == '1') {
              //  cout<<"HI"<<endl;
                s.at(l)= '0';
            } else {
                s.at(l) = '1';
            }
            l++;
            if((l)==m) {
                break;
            }
        }
        cout << "Compliment of binary is : " << endl;
        cout << s;
    }
};

int main() {
    string str;
    Binary b1;
    b1.get_input();
 
    b1.compliment();
    return 0;
}