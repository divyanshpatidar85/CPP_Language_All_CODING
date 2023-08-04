#include<bits/stdc++.h>
using namespace std;
int edge=0,cost=0,j=0;
char visited[9]={'0'};
typedef struct graph{
    int weight;
    char d,s;
}g;
vector<g>vec1;
void creation(char s1,char d1,int w1){
    g t;
    t.s=s1;
    t.d=d1;
    t.weight=w1;
     vec1.push_back(t);
}
void short_graph(){
  for(int i=0;i<9;i++){
    for(int j=i+1;j<9;j++){
      if(vec1[i].weight>vec1[j].weight)
        swap(vec1[i],vec1[j]);
    }
  }
  
}
int find(char c){
  for(int i=0;i<9;i++){
    if(visited[i]==c)
    return 0;
    
  }
  return 1;
}
void minimum_spanning_tree(){
   for(int i=0;i<9;i++){
    if(find(vec1[i].d )||find(vec1[i].s )){
     if(find(vec1[i].d ))
     visited[j++]=vec1[i].d ;
     if(find(vec1[i].s ))
     visited[j++]=vec1[i].s;

       cout<<vec1[i].s<<" --> "<<vec1[i].d<<endl;
       cost=cost+vec1[i].weight;

    }
  }
  cout<<"Total Cost is: "<<cost<<endl;
}
int main(){
  creation('A','B',4);//0
  creation('A','H',7);
  creation('B','C',8);//1
  creation('B','H',11);
  creation('C','I',2);//2
  creation('C','F',4);
   creation('C','D',7);
  creation('H','I',7);//7
creation('H','G',1);//7

   creation('G','I',6);//8
  creation('G','F',2);//6
  creation('F','D',14);
  creation('F','E',10);
   creation('D','E',9);
 
 short_graph();
 minimum_spanning_tree();
 




return 0;
}