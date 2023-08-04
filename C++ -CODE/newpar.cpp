#include<bits/stdc++.h>
using namespace std;
//static incre;
struct Node {
    int i;
    struct Node *next;
};
struct Node* insert(struct Node *ptr,int &j){
    // cout<<"hi";
     struct Node *hate;
     hate=(struct Node *)malloc(sizeof(Node));
     hate->i=j;
     hate->next=ptr;
     ptr=hate;
     return ptr;
   
}
void travalsel(struct Node *ptr){

while(ptr != NULL){
    cout<<ptr->i<<" ";
    ptr=ptr->next;
}
}
int main(){
    int k=0;
    string s;
    cin>>s;
    struct Node *head;
    head->next=NULL;
    for(int j=0;j<s.length();j++){
        if(s.at(j)=='('){
            k++;
        head=insert(head,k);
        }else if(s.at(j)==')'){
            k++;
        }
    }
     travalsel(head);
    

return 0;
}