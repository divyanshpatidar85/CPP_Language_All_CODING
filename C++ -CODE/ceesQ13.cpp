// Online C++ compiler to run C++ program online
#include <iostream>
static int d=0,k=0;
using namespace std;
void cheacker(long long int &f,long long int &s){
    if(f==0 && s==0){
        d=1;
    }
    if(f!=0 && s!=0){
        if(f>10 &&s >10){
        if(f>s){
            f=f-(((f/2)-1)*2);
            s=s-((f/2)-1);
        }else{
             f=f-((s/2)-1);
            s=s-(((s/2)-1)*2);
        }
        k=k+1;
        }
        if(f<10 || s<10){
      if(f>s){
           f=f-2;
           s=s-1;
         
       }
       else{
           f=f-1;
           s=s-2;
         
       }
       cheacker(f,s);
    }else
     cheacker(f,s);
    }
}
int main() {
  long long int test,a,b;
   cin>>test;

   for(long long int i=0;i<test;i++){
       cin>>a>>b;
        cheacker(a,b);
        if(d==1){
            cout<<"YES\n";
            d=0;
        }else{
            cout<<"NO\n";
        }
   
   }
    return 0;
}


// #include <iostream>

// using namespace std;
// void cheacker(long long int &a,long long int &b){
//     int k=0;
//     if(a>0 && b>0){
//         k=a/2;
//         if(k==1){
//             a=a-2;
//             b=b-1;
//         }else{
//            k=k-1;
//             a=a-((k)*2);
//             b=b-(k);
        
//         }
//         if(a>b){
           
//             cheacker(a,b);
//         }else
//         cheacker(b,a);
//     }
// }


// int main()
// {
//   long long int first,second,test;
//   cin>>test;
//   for(long long int i=0;i<test;i++){
//       cin>>first>>second;
 
//         if(first>second)
//             cheacker(first,second);
//         else
//         cheacker(second,first);
        
//     if(first==0 && second==0)
//     cout<<"YES\n";
//     else
//     cout<<"NO\n";
      
//   }

//     return 0;
// }
