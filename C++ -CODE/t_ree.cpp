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
tree *preorder(struct tree *&pode,tree *&op)
{ //  cout<<"hello \n";
    if(pode!=NULL){
        cout << pode->data<<" ";
      if((pode->data) < (op->data)){
        joker=pode;
      
      }
    preorder(pode->left,op);
    preorder(pode->right,op);
}
return joker;
}

tree *cheacker(tree *&ntr,tree *&ptr){
   tree *sucess=preorder(ptr,ntr);
 // cout<<sucess->data<<" jai shree Ram \n";
   return sucess;
   
}
tree *helper(tree *&z,tree *&refer){
    if(z !=NULL){
        if(z->left==refer){
            cout<<"1 wala \n";
            t=1;
            return z;
        }else if(z->right==refer){
              cout<<"2 wala \n";
             t=2;
            //  refer=z;
            //  cout<<"refer data is ==> "<<refer->data<<endl;
            z->right=NULL;
            cout<<"z data is "<<z->data<<endl;
            return z;
        }
      helper(z->left,refer);
    helper(z->right,refer);
    }
}
int deletation(tree *(&node),int value){
       static tree *ptr;
    if(i==0){
           atr=node;
        
           i++;
    }

       if(node->data > value){
        deletation(node->left,value);
       }
       else if(node->data < value){
        deletation(node->right,value);
       }else {
        cout<<"hello ,,,,\n";
           if(i==1){
            cout<<"hello 22222,,,\n";
               poo=cheacker(node,atr);
           tota=helper(atr,poo);
           cout<<"tota data is => "<<tota->data<<endl;
           i++;
           }

        if(node->right !=NULL ||node->right !=NULL){
        cout<<"data of deletion node is : "<<node->data<<endl;
           node->data=poo->data;
            cout<<"data of deletion node is : "<<node->data<<endl;
        }else
           cout<<"node data is bahut baditya ==> "<<node->data<<endl;

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
   deletation(n1,5);

    inorder(n1);
    return 0;
}