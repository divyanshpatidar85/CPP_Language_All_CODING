#include<bits/stdc++.h>
using namespace std;
static int i=0;
struct tstack{
    int num;

    struct tstack *link;
};
//struct tstack *hnew;
struct tstack* insertinstack(struct tstack *ptr){
   struct tstack *hnew;
   if(i==0){
    i++;
    ptr->num=i;
    ptr->link=NULL;
    hnew=ptr;
    

   }else{
    i++;
    hnew->link=(struct tstack *)malloc(sizeof(struct tstack));
    hnew=hnew->link;
    hnew->num=i;

   }
   hnew->link=NULL;

}
struct tstack* outofstack(struct tstack *chek){
    cout<<"jai shree ram\n";
 struct tstack *ew;
    if(chek->link==NULL){
        cout<<"stack is overflow \n";
        cout<<"it is unbalanced equation \n";
        return 0;
    }else {
        ew=chek;
      // chek->top--;
      //  cout<<"ew id  "<<chek<<endl;
        chek=ew->link;
        free(ew);
  //cout<<"ew id 2 "<<chek<<endl;
        return chek;
    }
}
int main(){
    int k=0;
string s;
cin>>s;
int size=s.length();
struct tstack *top;
top=(struct tstack *)malloc(sizeof(struct tstack));
top->link=NULL;
for(int i=0;i<s.length();i++){
if(s.at(i)=='('){
    if(k==0){
    top=insertinstack(&top);
   // cout<<"TOP  "<<top<<endl;
    }else{

    }
}
else if (s.at(i)==')'){
   // cout<<"top 1  "<<top<<endl;
    top=outofstack(top);
   // cout<<"top 2  "<<top<<endl;

}
}
cout<<"hello : "<<i<<endl;
if(i!=0){
    cout<<"unbalanced \n";
}

return 0;
}