#include <bits/stdc++.h>
using namespace std;
static int z=0,k=0;
typedef struct graph
{
  int weight;
  char d, s;
} g;
vector<g> edge_list;
vector<int> parent = {0, 1, 2, 3, 4, 5,6,7,8};
vector<int> raank = {0,0,0,0,0,0,0,0,0,0};
void creation(char s1, char d1, int w1)
{
  g edge;
  edge.s = s1;
  edge.d = d1;
  edge.weight = w1;
  edge_list.push_back(edge);
}
void short_graph()
{
  g x;
  for (int i = 0; i < 15; i++)
  {
    for (int j = i + 1; j < 15; j++)
    {
      if (edge_list[i].weight > edge_list[j].weight)
      {
        x = edge_list[i];
        edge_list[i] = edge_list[j];
        edge_list[j] = x;
      }
    }
  }
}


int  parent_finder(int x){
    if(parent[x]==x){
        return x;
    }
   parent[x] =parent_finder(parent[x]);
}

int r_f(int x1, int y1)
{
  if (raank[x1] < raank[y1])
  {
    raank[y1] = raank[y1] + 1;
     parent[x1]=y1;
  }
  else if (raank[x1] > raank[y1])
  {
    raank[x1] = raank[x1] + 1;
    parent[y1]=x1;
  }
  else
  {
    raank[y1] = raank[y1] + 1;
    parent[x1]=y1;
  }
}

int mimimum_spanning()
{
  int cost = 0;
  for (int i = 0; i < 15; i++)
  {
    int u=parent_finder(int(edge_list[i].s)-65);
    int v=parent_finder(int(edge_list[i].d)-65);
    if(u!=v){
        r_f(u,v);
      cout<<edge_list[i].s<<" --> "<<edge_list[i].d<<endl;
         cost+=edge_list[i].weight;
    }
  }
  cout << cost << endl;
}
int main()
{
   creation('A', 'B', 4);
  creation('A', 'H', 8);
  creation('B', 'H', 11);
  creation('B', 'C', 8);
  creation('C', 'I', 2);
  creation('C', 'D', 7);
  creation('C', 'F', 4);
  creation('H', 'I', 7);
   creation('H', 'C', 3);
  creation('H', 'G', 1);
  creation('I', 'G', 6);
  creation('G', 'F', 2);
  creation('D', 'F', 14);
  creation('D', 'E', 9);
  creation('E', 'F', 10);
  short_graph();
  mimimum_spanning();
  return 0;
}