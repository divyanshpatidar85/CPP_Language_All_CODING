#include<iostream>
#include<stdlib.h>
using namespace std;
struct simple{
    int id;
    struct simple *add;
};
void fun1(simple* N1)
{
    
    if(N1 == NULL){
        cout<<"fffffffff \n";
         return;
   }else{
    cout<<"HEFF \n";
          fun1(N1->add);
   }
 
    printf("%d  ", N1->id);  
   
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
   cout<<"hello main \n";
   fun1(head);
   
  
}