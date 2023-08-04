#include<bits/stdc++.h>
using namespace std;
struct Node{

char id;
	struct Node * next;
};
	struct Node* insert_at_node(struct Node *ptr){
     //   cout<<"first "<<ptr<<endl;
	struct Node *nptr; 
   nptr=(struct Node *)malloc(sizeof( Node));
//     nptr->id='(';
//    cout<<ptr->next<<"    ji \n";
//    nptr->next=ptr->next;
//     ptr->next=nptr;
//   cout<<ptr->next<<"    ji \n";
// 	cout<<ptr<<endl;
nptr->next=ptr;
nptr->id='(';
ptr=nptr;
return ptr;
}
	struct Node* delete_at_node(struct Node *ptr){
        if(ptr->next !=NULL){
        struct Node *nptr=ptr; 
        nptr=ptr->next;
        free(ptr);
       ptr=nptr;
  //  return ptr;
	
return ptr;
        }
        else{
            cout<<"stack is underflow \n";
            return 0;
        }
}
int main(){
	string s;
	getline(cin,s);
	struct Node *impliment,*v;

	impliment= (struct Node *)malloc(sizeof( Node));
    impliment->next=NULL;
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='('){
		impliment=insert_at_node(impliment);
		}
        else if(s.at(i)==')'){
         impliment=delete_at_node(impliment);

        }
		
		
	}

	if(impliment->next==NULL){
	cout<<"equation is completly true \n";
	
	}else{
        	cout<<"hello In given equation paranthis is missing\n";
    }
		
		
		
		
	}