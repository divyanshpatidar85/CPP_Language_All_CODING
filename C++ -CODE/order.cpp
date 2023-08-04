#include<iostream>
using namespace std;
int main (){
    int element;
    // int x=00001;
    // cout<<x;
    cout<<"Entre the total element of array";
    cin>>element;
    int mat[element];
        cout<<"Entre the  element of array";

    for(int i=0;i<element;i++){
        cin>>mat[i];
    }
   // int m=mat[0];
       int b=mat[0];
    int c=mat[0];
    int l,m;
    
  
    for(int i=0;i<element;i++){
        if(mat[i]>b){
            b=mat[i];
            l=i;
        }
        if(mat[i]<=c){
            c=mat[i];
            //  cout<<"Hi";
        }
        if(i==5){
            cout<<b;
            mat[l]=0;
            i=0;
        }

       
    }
}
