#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    string key;
    cin>>str;
    cin>>key;
    char ch=key[0];
    if(key.size()!=1){
        cout<<str;
        return 0;
    }
    int size = str.size();
    for(int i=0;i<size;i++){
        if(str[i]==ch){
            for(int j=i;j<size;j++){
                str[j]=str[j+1];
            }
            size--;
        }
    }
    cout<<str;
}