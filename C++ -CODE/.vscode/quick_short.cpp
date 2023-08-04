#include <bits/stdc++.h>
using namespace std;
static int a=1;
int  pivot(int *arr,int low,int high){
    int count=0;
    for(int i=low+1;i<=high;i++){
        if(arr[low]>=arr[i])
            count++;
    }
    swap(arr[count+low],arr[low]);
    cout<<"count ==> "<<a<<"  "<<count<<endl;
    a++;
    int i=low;
    int j=high;
    while(i<count && j>count){
    while(i<count &&arr[i]<arr[count+low]){
        i++;
    }
    while(j>count &&arr[j]>arr[count+low]){
        j--;
    }
    swap(arr[i],arr[j]);
    }
    cout<<"HELLO "<<endl;
 return count+low;
}

void mergeShort(int *arr1,int lower,int higher){
    if(lower>=higher)
    return;
    int k= pivot(arr1,lower,higher); 
    mergeShort(arr1,lower,k-1);
    mergeShort(arr1,k+1,higher);
}

int main()
{
    int arr[]={22,10,9,24,15,2};
    mergeShort(arr,0,5);
  for(int i=0;i<6;i++){
      cout<<arr[i]<<"  ";
  }
  cout<<endl;
    return 0;
}