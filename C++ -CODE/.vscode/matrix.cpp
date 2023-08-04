
#include<iostream>
using namespace std;

int main()
{
    int row1,column1,row2,column2;
    cout<<"Enter row and column of matrix 1 : ";
    cin>>row1>>column1;
    int array1[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cin>>array1[i][j];
        }
    }
    cout<<"Enter row and column of matrix 2 : ";
    cin>>row2>>column2;
    int array2[row2][column2];
     int array3[row1][column2];
      for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cin>>array2[i][j];
        }
    }
    int mul=0;
    for(int k=0;k<row1;k++){
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            cout<<array1[k][j]<<"   "<<array2[j][i]<<endl;
            mul=mul+(array1[k][j]*array2[j][i]);
        }
        cout<<mul<<endl;
        array3[k][i]=mul;
        mul=0;
    }
    }
    // for(int i=0;i<row1;i++){
    //     for(int j=0;j<column2;j++){
    //       cout<<array3[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}

