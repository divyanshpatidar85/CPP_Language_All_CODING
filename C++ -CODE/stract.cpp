// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// struct stract{
//  //int id;
//  int top=-1;
//  int *arr;
// };

// int main(){
//     int size,id;
//     cout<<"size of stack \n";
//     cin>>size;
//     struct stract sp;
//     sp.arr=(int*)malloc(size * sizeof(sp.arr));
//     for(int i=0;i<size;i++){
//         cin>>id;
//         sp.top=sp.top+1;
//         sp.arr[sp.top]=id;

//     }
//     for(int i=0;i<size;i++){
//       //  cin>>id;
//        cout<<sp.arr[sp.top]<<endl;
//         sp.top=sp.top-1;
       

//     }


// return 0;
// }
#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int id;
    struct Node *top;
};
void travalsel(struct Node *ptr){
//cout<<"jai shree ram \n";
while(ptr != NULL){
   // cout<<"hi";
    cout<<ptr->id<<" ";
    ptr=ptr->top;
}
}
void checker(struct Node *ffew){
    cout<<"i am here \n";
    if(ffew==NULL){
        cout<<"Space is not available \n";
        exit(0);
    }
}
int nchecker(struct Node *ffew){
  cout<<"delete i am here \n";
    if(ffew->top==NULL){
        cout<<"its empty \n";
       return 0;
    }
}
struct Node *inserat(struct Node *ptr ,int data){
    // checker(ptr);
    struct Node*hate;
    hate=(struct Node *)malloc(sizeof(Node));
     hate->id=data;
     hate->top=ptr;
     ptr=hate;
     return ptr;  
}
struct Node *deleteat(struct Node * (&ptr)){
    if(nchecker((ptr))){
    cout<<"time pass ";
       struct Node *z=(ptr);
     (ptr)=(ptr)->top;
     free(z);
      ptr=z;
    }  else{
        exit(0);
       
  

     
    }
}
int main(){
    int n,size;
    struct Node *sp,*p,in;
    cout<<"Enter the size of link list \n";
    cin>>size;
   for(int i=0;i<size;i++){
        cout<<"Enter element \n";
        cin>>n;
        if(i==0){
            p=(struct Node*)malloc(sizeof(Node));
            p->id=n;
           sp=p;

        }else{
              sp->top=(struct Node*)malloc(sizeof(Node));
               sp=sp->top;
              //  cout<<"address  "<<sp<<endl;
               sp->id=n;
            

        }
    }
    sp->top=NULL;
    cout<<"jai shree ram "<<sp->top<<endl;
   // p=NULL;
  p=inserat(p,18);
   p=inserat(p,558);
     p=inserat(p,458);
      p=inserat(p,258);
       p=inserat(p,598);
        p=inserat(p,66);
//           p=inserat(p,46);
//             p=inserat(p,56);
//       deleteat(p);
//   p=inserat(p,86);
 deleteat(p);
    deleteat(p);
     deleteat(p);
     deleteat(p);
    deleteat(p);
    cout<<"traversiing called \n";
   travalsel(p);
return 0;
}