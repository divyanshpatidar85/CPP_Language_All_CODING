#include<bits/stdc++.h>
using namespace std;
struct ist{
	char *arr;
	int *pr;
	int top;
	
};

int main(){
	int checker=0;
	struct ist *put=(ist *)malloc(sizeof(ist));
	put->pr[-1]=5;
	string s;
    put->top=-1;
	cout<<"Enter Expression \n";
	cin>>s;
    int t= s.length();
 put->arr=(char *)malloc(t*sizeof(char));
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='+'||s.at(i)=='-'||s.at(i)=='*'||s.at(i)=='/'||s.at(i)=='('){
         
			if(s.at(i)=='+'){
                if(put->pr[put->top]<=1){
                    cout<<put->arr[put->top];
                  put->top--;
                }//else{
                //      cout<<put->arr[put->top];
                //  put->top--;
                // }
              put->top++;
              put->arr[put->top]='+';
              put->pr[put->top]=1;
               
				continue;
				}
                else if(s.at(i)=='-'){
                if(put->pr[put->top]<=1){
                    cout<<put->arr[put->top];
                 put->top--;
                }//else{
                //      cout<<put->arr[put->top];
                //  put->top--;
                // }
              put->top++;
              put->arr[put->top]='-';
              put->pr[put->top]=1;
               
				continue;
				}
                else if(s.at(i)=='*'){
                if(put->pr[put->top]==2){
                    cout<<put->arr[put->top];
                 put->top--;
                }
                if(put->pr[put->top]<=1)
              put->top++;
              put->arr[put->top]='*';
              put->pr[put->top]=2;
               
				continue;
				}
                 else if(s.at(i)=='/'){
                if(put->pr[put->top]==2){
                    cout<<put->arr[put->top];
                 put->top--;
                }
                if(put->pr[put->top]<=1)
              put->top++;
              put->arr[put->top]='/';
              put->pr[put->top]=2;
               
				continue;
				}
              //   else if(s.at(i)=='('){
              //    put->top++;
              //      put->arr[put->top]='(';
              // //put->pr[put->top]=2;
              //     continue;
              //   }
               
              
               
        }else{
       
         cout<<s.at(i);	
    }
   
}
 while(put->top != -1){
        cout<<put->arr[put->top];
      put->top--;
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// struct ist{
// 	char *arr;
// 	int *pr;
// 	int top;
	
// };

// int main(){
// struct ist *stack;
//    stack->top=-1;
//    stack->pr[stack->top]=5;
//    string s;
//    cout<<"Enter expression\n";
//    cin>>s;
//    for(int i=0;i<s.length();i++){
//     if(s.at(i)='+'||s.at(i)='-')
      
//    }
 
// }
