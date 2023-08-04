#include <iostream>
using namespace std;
static int i=0;
struct tree
{
    int data;
    struct tree *left;
    struct tree* right;
};
struct tree *insertion(int value)
{
    struct tree *insertii = (struct tree *)malloc(sizeof(tree));
    insertii->data = value;
    insertii->left = NULL;
    insertii->right = NULL;
    return insertii;
}
void inorder(struct tree *node)
{   
    if(node!=NULL){
    inorder(node->left);
    cout << node->data<<" ";
    inorder(node->right);
}
}
int  deletation(tree *node,int value){
    static tree *ptr;
    
    if(node !=NULL){
   if(node->data>value){
    i=1;
    ptr=node;
    deletation(node->left,value);
   }else if(node->data<value){
    i=2;
     ptr=node;
    deletation(node->right,value);
   }else{
    if(i==1){
    cout<<node->data<<endl;
    ptr->left=node->left;
     free(node);
    }
    else{
     cout<<node->data<<endl;
    ptr->right=node->right;
    free(node);
    }
   }
    }else{
         if(i==1){
  cout<<node->data<<endl;
   
     free(node);
    }
    else{
  
    ptr->right=node->right;
    free(node);
    }

    }
}
int main()
{
    tree *n1, *n2, *n3, *n4, *n5;
    n1 = insertion(5);
    n2 = insertion(3);
    n3 = insertion(6);
    n4 = insertion(2);
    n5 = insertion(4);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    inorder(n1);
    cout<<"hello \n";
   deletation(n1,6);

    inorder(n1);
    return 0;
}