#include<iostream>
#include<stdlib.h>
using namespace std;
struct simple{
    int id;
    struct simple *add;
};
void travalsel(struct simple *ptr){

while(ptr != NULL){

    cout<<ptr->id<<" ";
    ptr=ptr->add;
}
}
void deltation(struct simple * ptr,int index){
   
    for(int i=1;i<index;i++){
        cout<<"hi\n";
        ptr=ptr->add;
        if(i==index-1){

            struct simple *Bow;
            Bow=(struct simple *)malloc(sizeof(simple));
            Bow->add=ptr->add;
         Bow->id=90;
            ptr->add=Bow;

            
          //  free(Bow);
            
            
        }
        
    }
    
}
int main(){
    int n=5,data;
       struct simple *head,*p;
    for(int i=0;i<n;i++){
        
        cout<<"enter data \n";
        cin>>data;
      
        if(i==0){
         
            head=(struct simple*)malloc(sizeof(simple));
            head->id=data;
         
           p=  head;
   
        }else{
        
             p->add=(struct simple*)malloc(sizeof(simple)); 
           
            p= p->add;

              p->id=data;
                
        
          

        }
    }
            
    
   p->add=NULL;


    deltation(head,2);


   travalsel(head);




return 0;
}