#include<bits/stdc++.h>
using namespace std;
int d=INT_MAX;
static int trans,cost=0,j=1;
vector<int>parent={-1,-1,-1,-1,-1,-1,-1,-1,-1};
vector<int>wght={d,d,d,d,d,d,d,d,d};
vector<int>visited={0,0,0,0,0,0,0,0,0};
void creation(vector< pair <int,int> >arr[],int weight,int s,int d){
    arr[s].push_back(make_pair(d,weight));
    arr[d].push_back(make_pair(s,weight));
}
 
void minimum_spanning(vector< pair <int,int> >trr[],int source){
    parent[source]=0;
    visited[source]=1;
    // cout<<source<<endl;

  for(int i=0;i<trr[source].size();i++){
       if( wght[trr[source][i].first]>=trr[source][i].second && visited[trr[source][i].first]!=1){
        parent[trr[source][i].first]=0;
        wght[trr[source][i].first]=trr[source][i].second;
       }
  }
  int k=INT_MAX;
  for(int i=0;i<9;i++){
    if(visited[i]!=1 && k>=wght[i]){
        k=wght[i];
        trans=i;
    }
  }

  cost=cost+wght[trans];
  if(j<8 ){
     j++;
  cout<<source<<"-->"<<trans<<endl;
  // cout<<"weight of edge is : "<<k<<"and one node is : "<<trans<<endl;
    minimum_spanning(trr,trans);
  }

}
int main(){
vector< pair <int,int> >garph[9];
 creation(garph,4,0,1);
 creation(garph,8,0,7);
 creation(garph,8,1,2);
 creation(garph,11,1,7);
 creation(garph,7,2,3);
 creation(garph,4,2,5);
  creation(garph,2,2,8);
   creation(garph,7,7,8);
    creation(garph,1,7,6);
     creation(garph,6,8,6);
      creation(garph,2,6,5);
       creation(garph,14,3,5);
        creation(garph,9,3,4);
         creation(garph,10,5,4);
 minimum_spanning(garph,0);
 cout<<"Total cost is : "<<cost<<endl;
return 0;
}