#include <iostream>
using namespace std;
static int i=0,j,m=0,l,t;
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
void inorder(struct tree *&node)
{   
    if(node!=NULL){
    inorder(node->left);
    cout << node->data<<" ";
    inorder(node->right);
}
}
static struct tree *atr,*joker,*tota,*poo;
struct tree *ram;
void preorder(struct tree *pode,tree *op)
{ 
    if(pode!=NULL){
       // cout << pode->data<<" ";
      if((pode->data) < (op->data)){
        if(j==0 || pode->data > joker->data)
             joker=pode;
             j++;
      }
    preorder(pode->left,op);
    preorder(pode->right,op);
}

}
tree *ptr;
      tree *ntr;
int deletation(tree *(node),int value){
     if(i==0){
      i++;
    //  ptr=node;
      ntr=node;
     }  
     if(node !=NULL){ 
    if(node->data > value){
         cout<<"      l \n";
         m=1;
      deletation(node->left,value);
    }
    else  if(node->data < value){
      m=2;
      deletation(node->right,value);
    }
    else{
      cout<<node->data<<"  h\n";
      cout<<node->left
       if(node->left !=NULL || node->right!=NULL){
        cout<<"  "<<node->data<<endl;
            preorder(ntr,node);
            node->data=joker->data;
            tota=joker;
            atr=joker;
        //  cout<<node->data<<" Jai shree Ram \n";
        preorder(ntr,atr);
        if(joker->left==NULL &&joker->right==NULL){
                      tota->data=joker->data;
                      joker=NULL;
        }else{
          if(m==1){
            node->left=tota->left;
          }else{

          }
        }
       }else{
        cout<<"   harr "<<joker->data<<endl;
        preorder(ntr,node);
        if(m==1){
          joker->left=NULL;
        }else{
          joker->right=NULL;
        }
            
          }
       }

    }

     }


int main()
{
    tree *n1, *n2, *n3, *n4, *n5,*n6,*n7,*n8;
    n1 = insertion(10);
    n2 = insertion(5);
    n3 = insertion(20);
    n4 = insertion(3);
    n5 = insertion(17);
      n6 = insertion(21);
  n7 = insertion(2);
   n8 = insertion(4);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
  n3->left=n5;
  n3->right=n6;
  n4->left=n7;
  n4->right=n8;

    inorder(n1);
    cout<<"hello \n";
   deletation(n1,2);
   inorder(n1);
    return 0;
}