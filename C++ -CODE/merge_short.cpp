#include <iostream>
using namespace std;
static int a=1;
int brr[6];
void mergeArray(int *arr2,int low ,int mid1,int high ){
    int i=low;
    int j=mid1+1;
    int k=low;
    while(i<=mid1 && j<=high){
        if(arr2[i]<arr2[j]){
            brr[k]=arr2[i];
            i++;
        }else{
               brr[k]=arr2[j];
               j++;
        }
        k++;
    }
    while(i<=mid1){
        brr[k]=arr2[i];
            i++;k++;
    }
     while(j<=high){
        brr[k]=arr2[j];
            j++;k++;
    }
    for(int m=low;m<=high;m++){
        arr2[m]=brr[m];
    }
  
}

void mergeShort(int *arr1,int lower,int higher){
    if(lower>=higher)
    return;
    int mid=(lower+higher)/2;
    mergeShort(arr1,lower,mid);
    mergeShort(arr1,mid+1,higher);
    mergeArray(arr1,lower,mid,higher);
}

int main()
{
    int arr[]={22,10,9,24,15,26};
    mergeShort(arr,0,5);
  for(int i=0;i<6;i++){
      cout<<arr[i]<<"  ";
  }
  cout<<endl;
    return 0;
}