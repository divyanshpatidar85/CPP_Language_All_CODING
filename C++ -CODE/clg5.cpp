
// #include<iostream>
// using namespace std;
// int main(){
// long long int n,m=0,z=1;
// cin>>n;
// long long int arr[n],com[n];

// for(long long int i=1;i<=n;i++){
    
//     arr[i-1]=i;

// }

//     for(long long int i=2;i<n+1;i=i+2){

//     com[m]=i;
//     m++;

// }


// for(long long int i=1;i<n+1;i=i+2){
//     com[m]=i;
//     m++;
// }
   
// if(n>1){
// for(long long int i=0;i<n;i=i+1){
//   if(com[i]-com[i+1] ==1 || com[i]-com[i+1] ==(-1)){
//     cout<<"NO SOLUTION";
//   return 0;
//   }

// else{
  
// }

// }
// }
// for(long long int i=0;i<n;i++){
//     cout<<com[i]<<" ";
// }


// return 0;
// }
// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>

using namespace std;
class root{
    float root1;
   float root2;
    public:
    root(int a1,int b1,int c1){
        if((sqrt((b1*b1)-(4*a1*c1)))>=0){
  root1 = (-b1+sqrt((b1*b1)-(4*a1*c1)))/2*a1;
  root2 = (-b1-sqrt((b1*b1)-(4*a1*c1)))/2*a1;
  
  cout<<"first root is "<<root1<<endl;
  cout<<"second root is "<<root2<<endl;
        }
    
    else{
        float c;
        
        c=-((b1*b1)-(4*a1*c1));
        c=sqrt(c);
        cout<<c<<endl;
        float  b=-(float(b1)/float(2*a1));
float  d=-(float (b1)/float(2*a1));
root1=float(c)/float(2*a1);
root2=float(c)/float(2*a1);
cout<<"first root is "<<b <<" + ("<<root1<<"i)"<<endl;
cout<<"second root is "<<d <<" -("<<root2<<"i)"<<endl;

    }
    }
     
};
int main() {
    // Write C++ code here
   // std::cout << "Hello world!";
 int a;
int b;
 int c;
 cout<<"Enter the coefficient(with sign) of x^2 ,x and constant term (ax^2+bx+c=0) respectively"<<endl;
 cin>>a>>b>>c;
 root qua(a,b,c);
 
    return 0;
}