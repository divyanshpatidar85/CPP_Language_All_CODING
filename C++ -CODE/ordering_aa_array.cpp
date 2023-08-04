#include<iostream>
using namespace std;

int main()
{
int ele,flag=0,break_=1,j=0;
cin>>ele;
int a[ele];

int base,m=0,l=0;
for(int i=0;i<ele;i++){
cout<<"Enter value";
cin>>a[i];
}
base=a[0];
for(j=0;j<ele;j++){

if(base<a[j]){
    flag=j;
    base=a[j];
      
    }
    if(j==ele-1){
        j=-1;
        cout<<base<<" , ";
        base=0;
        a[flag]=0;
        break_++;
        if(break_==ele+1){
            break;
        }
    }
}
}
