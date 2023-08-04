#include<iostream>
using namespace std;
int main(){
int j;
cin>>j;
for(int i=2;i<((j)/2);i++){
    if(j%i==0){
        cout<<"Not Prime \n";
        return 0;
    }
}
if(j!=1)
cout<<"prime \n";
else
 cout<<"Not Prime \n";
return 0;
}