#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
};
//inset at back
node *insernewend(node* head,int da){
    
    if(head->next !=NULL){
        cout<<head->data<<" ";
     insernewend(head->next,da);
    }else{
        node *ptr=new node[1];
        ptr->data=da;
        ptr->next=NULL;
       head->next=ptr;
    }
    


}
//for inserting at head
node* insertathead(node* &head,int d){
	node *temp;
	temp=new node;
	temp->data=d;
	temp->next=head;
	head=temp;
	return head;
	
}
void print(node* head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}
int main(){
	node *head;
	head=new node;
	head->data=10;
	head->next=NULL;
	head=insertathead(head,20);
	head=insertathead(head,30);
    print(head);
    cout<<"at ending \n";
	insernewend(head,50);
   // cout<<"gggggggggg   "<<head->data<<endl;
	//print(head);
	
}