#include<iostream>
using namespace std;
int sumse(int i,int n,int f){
 if(i==n){
   return 1;
 }else{
   i++;
    f=i*i;
    sumse(0,0,10);
    sumse(0,0,10);
    sumse(0,0,0);
    sumse(0,0,0);
    sumse(0,0,0);
    sumse(0,0,0);
    cout<<"hu  "<<i;
   return (f)+ sumse(i,n,f);
 }

}
int main(){
int n,i,k=0;
cin>>i;
int l=sumse(0,i,k);
cout<<l-1;
return 0;
}

/*
this will not affect our outpur beacuse we are returning from base
   sumse(0,0,10);
    sumse(0,0,10);
    sumse(0,0,0);
    sumse(0,0,0);
    sumse(0,0,0);
    sumse(0,0,0);
*/