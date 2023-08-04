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
void inorder(struct tree *node)
{   
    if(node!=NULL){
    inorder(node->left);
    cout << node->data<<" ";
    inorder(node->right);
}
}
struct tree *atr;
int cheacker(tree *&ntr,tree *&ptr,int o){
    if(ptr !=NULL){
     if(ptr==ntr || ptr->left==ntr ||ptr->right==ntr){
      struct tree *conci=ntr;
      if(conci->left !=NULL){
        conci=conci->left;
        ntr->data=conci->data;
     //   free(conci);
       // free(conci);
      }
    //   tree *dj=ntr;
    //   dj=dj->left;
    //   if(o==1){
    //      ptr->left=dj;
    //   }
    //   ntr->right=ptr->right;
    // cout<<"ptr data is : "<<ptr->data<<endl;
    // ptr->left=ntr->left;
    // ntr->right=ptr->right;

        return ptr->data;
    }
    else if(ptr==ntr || ptr->right==ntr){
       
       ptr->left=ntr->left;
       ptr->right=ntr->right;
       return ptr->data;
    }
    cheacker(ntr,ptr->left,o);
     if(ptr==ntr || ptr->left==ntr){
         
      
        ptr->data=ntr->data;
        ptr->left=NULL;
         l=ptr->data;
        return l;
    }
    else if(ptr==ntr || ptr->right==ntr){
      ptr->data=ntr->data;
        ptr->right=NULL;
         l=ptr->data;
       return l;
    }
    cheacker(ntr,ptr->right,o);
    }     
}
deletation(tree *(node),int value){
    
    if(i==0){
           atr=node;
           i++;
    }
       if(node->data > value){
        t=1;
        deletation(node->left,value);
       }
       else if(node->data<value){
        t=2;
        deletation(node->right,value);
       }else{
        cout<<"NOde data is : "<<node->data<<endl;
       // cout<<"hello aaa\n"<<node->data;
         int j=cheacker(node,atr,t);
      //   cout<<"kkkkk   "<<node->data;
         node->data=j;
           

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
   deletation(n1,20);

    inorder(n1);
    return 0;
}