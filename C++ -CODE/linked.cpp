#include<iostream>
#include<stdlib.h>
using namespace std;
struct simple{
    int id;
    struct simple *add;
};
void travalsel(struct simple *ptr){
//cout<<"jai shree ram \n";
while(ptr != NULL){
   // cout<<"hi";
    cout<<ptr->id<<" ";
    ptr=ptr->add;
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
      //     cout<<p<<"if waala \n"; 
            
        }
        else{
       //  cout<<p<<"ram ram \n";
             p->add=(struct simple*)malloc(sizeof(simple)); 
           
            p= p->add;
//cout<<p<<"ji";
              p->id=data;
                
        
          

        }
        
            
    }
   p->add=NULL;
    struct simple *pt,*lo,*ji;
   pt=(struct simple*)malloc(sizeof(simple));
   pt->add=head;
   pt->id=100;
   head=pt;
   for(int i=1;i<7;i++){
   if(i==1){
    p=head;
   }else{
    p=p->add;
   }

    if(i==6){
         lo=(struct simple*)malloc(sizeof(simple));
       //  lo->add=p->add;
         p->add=lo;
         lo->id=70;
         lo->add=NULL;

    }
   }
   for(int i=1;i<5;i++){
    
    if(i==1){
        cout<<"hello 1 \n";
        p=head;
    }
    else{
        cout<<"hello 2 \n";
       p=p->add;
    }
    if(i==4){
        struct simple *t=p->add;
        p->add=t->add;
      //  free(t);
   // p->add=t;
        
    }
   }

   travalsel(head);




return 0;
}
