#include<iostream>
using namespace std;
struct qu{
    int size;
int top;
int rear;
int *arr;
};
//struct qu *
int enque(struct qu *pat,int value){
if(pat->rear ==-1 && pat->top==-1){
   pat->top++;
   pat->rear++;
   pat->arr[pat->top]=value;
}else{
    pat->rear++;
    pat->arr[pat->rear]=value;
}

}
int main(){
    struct qu *ele=(struct qu *)malloc(sizeof(qu));
    ele->size=55;
    ele->arr=(int*)malloc(55*sizeof(int));
    ele->rear=-1;
    ele->top=-1;
    enque(ele,5);
    enque(ele,10);
    while(ele->top !=ele->rear+1){
        cout<<ele->arr[ele->top]<<endl;
        ele->top++;
    }
    

return 0;
}