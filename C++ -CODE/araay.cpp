#include<iostream>
using namespace std;
void array1(int mat[],int ele){
    int b=mat[0];
    int c=mat[0];
    int l,m;
    
  
    for(int i=0;i<ele;i++){
        if(mat[i]>b){
            b=mat[i];
        }
        if(mat[i]<=c){
            c=mat[i];
            //  cout<<"Hi";
        }

       
    }
    m=b;
    l=c;
   // cout<<b;
    for(int i=0;i<ele;i++){
        if(mat[i]>= l && mat[i]!=b && mat[i]<b ){
            l=mat[i];
          //  cout<<"hi";
        }
       // m=l;
        if(mat[i]<=m && mat[i]!=c && mat[i]>c){
            m=mat[i];
           // cout<<"hi";
        }

       
    }
    cout<<"second largest number"<<l<<endl<<"second minimum number"<<m;
}
int main () {
    int element;
    int x=00001;
    cout<<x;
    cout<<"Entre the total element of array";
    cin>>element;
    int mat[element];
        cout<<"Entre the  element of array";

    for(int i=0;i<element;i++){
        cin>>mat[i];
    }
   // array1( mat,element);

}