#include<iostream>
using namespace std;
union name{
    string pppp;
};
union roll{
    int roll;
};
int main(){
    int n=5;
    union roll mat[n];
    union name aat[n];
    for(int i=0;i<n;i++){
      cin>>  mat[i].roll;
      cin>>  aat[i].pppp;
    }
}
