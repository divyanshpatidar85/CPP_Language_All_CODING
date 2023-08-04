#include <iostream>
#include<cstring>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
class Timer
{
    int sec = 0;
string d;
public:
    Timer()
    {
        cin>>d;
        while (1)
        {
            
        cin>>d;
            system("cls");
            sleep(1);
            sec++;
            cout <<"you take time is "<< sec;
            if(sec==10){
                break;

            }
            
        }
    }
};
int main()
{
    int sec = 0;
    string s( "The "), s1;
   
    cout << s<<endl;

    cout << "Entre the same line as above shown" << endl;
    Timer t1;
    cin>>  s1;

    return 0;
}