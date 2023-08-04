#include <iostream>
using namespace std;
int statio(int a, int b)
{
    static int var = 0;
    var += 1;
    return a * b + var;
}
int main()
{
    int first_num, Second_num;
    cout << "Entre the first and second number respectively : " << endl;
    cin >> first_num >> Second_num;
    cout << "first call  : " << statio(first_num, Second_num) << endl;
    cout << "second call : " << statio(first_num, Second_num) << endl;
    return 0;
}