// #include <iostream>
// using namespace std;
// class complex
// {
//     int a,b;
//     public:
//     void setdata(int v1,int v2){
// this ->a=v1;
// this ->b=v2;
//     }
// void printdata(complex)

// };

// int main()
// {
//     complex c1,c2,c3;
//     c1.setdata(2,3);
//     c2.setdata(3,4);
//     c3.printdata(c1,c2);

// }
#include <iostream>
using namespace std;
class binary
{
    string s;
    public:
    void Reads();
    void chk_bin();
    void compliment();
}; 
void binary :: Reads()
{
    cout << "Enter a binary number \n";
    cin >> s;
}
void binary :: chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1' )
        {
            cout << "invalid input";
        exit(1);
        }
    }
}
void binary :: compliment()
{
    chk_bin();
    
    for (int i = 0; i < s.length(); i++)
    {
      //  cout<<"hi";
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
            //   return 0;
        }
        else 
        {
           // cout<<"hi";
            s.at(i) = '0';
        }
    cout<<s.at(i);
    }
}
        int main()
        {
            binary num;
            num.Reads();
            num.compliment();
        }
    
