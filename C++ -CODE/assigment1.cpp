// #include<iostream>
// #include<string.h>
// using namespace std;
// class Expensive_car{
//     string model[2];
//     int price[2];
//     int count;
//     public:
//     void intilaization(){ count=0;}
//    void set_data(string m,int pric){
//     model[count]=m;
//     price[count]=pric;
//       count++;
//    }
//    void print_data(){
//     cout<<model[count-1]<<endl;
//     cout<<price[count-1]<<endl;
    
//     count--;
//    }

// };
// int main(){
//     Expensive_car landrover;
//     landrover.intilaization();
//     landrover.set_data("Discovery",5000000);
//      landrover.set_data("Evoque",1000000);
//      landrover.print_data();

// }
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
int arr[n],l,k=0,order[n],m;
cout<<"Enter element"<<endl;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
m=arr[0];
for(int i=0;i<n;i++){
  if(arr[i]>m){
    m=arr[i];
    l=i;
  }
  
  if(i==n-1){
    arr[l]=0;
    i=-1;
    cout<<"hello  "<<m<<endl;
    order[k]=m;
    m=0;
    k++;
    if(k==n){
      break;
    }
  }
}
//cout<<l;
for(int i=0;i<n;i++){
 cout<<order[i]<<"   ";
}
//cout<<"arr qqq"<<arr[0];
return 0;
}